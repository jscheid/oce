# Find tbb includes and libraries
  
  IF(${COMPILER_BITNESS} STREQUAL 32)
    SET (TBB_ARCH_NAME ia32)
  ELSE()
    SET (TBB_ARCH_NAME intel64)
  ENDIF()
  
  IF(NOT DEFINED 3RDPARTY_TBB_DIR)
    SET(3RDPARTY_TBB_DIR "" CACHE PATH "Directory contains tbb product")
  ENDIF()
  
  SET(3RDPARTY_TBB_DIR_NAME "")
  IF(3RDPARTY_DIR AND ("${3RDPARTY_TBB_DIR}" STREQUAL "" OR CHANGES_ARE_NEEDED))
    FIND_PRODUCT_DIR("${3RDPARTY_DIR}" "TBB" 3RDPARTY_TBB_DIR_NAME)
    IF("${3RDPARTY_TBB_DIR_NAME}" STREQUAL "")
      MESSAGE(STATUS "TBB DON'T FIND")
    ELSE()
      SET(3RDPARTY_TBB_DIR "${3RDPARTY_DIR}/${3RDPARTY_TBB_DIR_NAME}" CACHE PATH "Directory contains tbb product" FORCE)
    ENDIF()
  ENDIF()
  
  SET(INSTALL_TBB OFF CACHE BOOL "Is tbb lib copy to install directory")

  IF(3RDPARTY_TBB_DIR)
    IF("${3RDPARTY_TBB_INCLUDE_DIR}" STREQUAL "" OR CHANGES_ARE_NEEDED)
      SET(3RDPARTY_TBB_INCLUDE_DIR "3RDPARTY_TBB_INCLUDE_DIR-NOTFOUND" CACHE PATH "Directory contains headers of the tbb product" FORCE)
      FIND_PATH(3RDPARTY_TBB_INCLUDE_DIR tbb/tbb.h PATHS "${3RDPARTY_TBB_DIR}/include")
    ENDIF()

    SET(TBB_DEBUG_POSTFIX "")
    if("${CMAKE_BUILD_TYPE}" STREQUAL "Debug")
      SET(TBB_DEBUG_POSTFIX "_debug")
    ENDIF()
    
    IF("${3RDPARTY_TBB_LIBRARY}" STREQUAL "" OR CHANGES_ARE_NEEDED OR "${3RDPARTY_TBB_LIBRARY}" STREQUAL "3RDPARTY_TBB_LIBRARY-NOTFOUND")
      SET(3RDPARTY_TBB_LIBRARY "3RDPARTY_TBB_LIBRARY-NOTFOUND" CACHE PATH "Directory contains library of the tbb product" FORCE)
      FIND_LIBRARY(3RDPARTY_TBB_LIBRARY tbb${TBB_DEBUG_POSTFIX} PATHS "${3RDPARTY_TBB_DIR}/lib/${TBB_ARCH_NAME}/${COMPILER}" NO_DEFAULT_PATH)
      
      IF("${3RDPARTY_TBB_LIBRARY}" STREQUAL "3RDPARTY_TBB_LIBRARY-NOTFOUND")
        FIND_LIBRARY(3RDPARTY_TBB_LIBRARY tbb${TBB_DEBUG_POSTFIX})
      ENDIF()
    ENDIF()

    IF("${3RDPARTY_TBB_MALLOC_LIBRARY}" STREQUAL "" OR CHANGES_ARE_NEEDED OR "${3RDPARTY_TBB_MALLOC_LIBRARY}" STREQUAL "3RDPARTY_TBB_MALLOC_LIBRARY-NOTFOUND")
      SET(3RDPARTY_TBB_MALLOC_LIBRARY "3RDPARTY_TBB_MALLOC_LIBRARY-NOTFOUND" CACHE PATH "Directory contains library of the tbb malloc product" FORCE)
      FIND_LIBRARY(3RDPARTY_TBB_MALLOC_LIBRARY tbbmalloc${TBB_DEBUG_POSTFIX} PATHS "${3RDPARTY_TBB_DIR}/lib/${TBB_ARCH_NAME}/${COMPILER}" NO_DEFAULT_PATH)
      
      IF("${3RDPARTY_TBB_MALLOC_LIBRARY}" STREQUAL "3RDPARTY_TBB_MALLOC_LIBRARY-NOTFOUND")
        FIND_LIBRARY(3RDPARTY_TBB_MALLOC_LIBRARY tbbmalloc${TBB_DEBUG_POSTFIX})
      ENDIF()
    ENDIF()
    
    
    
    IF("${3RDPARTY_TBB_DLL}" STREQUAL "" OR CHANGES_ARE_NEEDED)
      SET(3RDPARTY_TBB_DLL "3RDPARTY_TBB_DLL-NOTFOUND" CACHE PATH "Directory contains shared library of the tbb product" FORCE)
      FIND_FILE(3RDPARTY_TBB_DLL "${DLL_SO_PREFIX}tbb${TBB_DEBUG_POSTFIX}.${DLL_SO}" PATHS "${3RDPARTY_TBB_DIR}/${DLL_SO_FOLDER}/${TBB_ARCH_NAME}/${COMPILER}" NO_DEFAULT_PATH)
      
      IF("${3RDPARTY_TBB_DLL}" STREQUAL "3RDPARTY_TBB_DLL-NOTFOUND")
        FIND_FILE(3RDPARTY_TBB_DLL "${DLL_SO_PREFIX}tbb${TBB_DEBUG_POSTFIX}.${DLL_SO}")
      ENDIF()
    ENDIF()
    
    IF("${3RDPARTY_TBB_MALLOC_DLL}" STREQUAL "" OR CHANGES_ARE_NEEDED)
      SET(3RDPARTY_TBB_MALLOC_DLL "3RDPARTY_TBB_MALLOC_DLL-NOTFOUND" CACHE PATH "Directory contains shared library of the tbb malloc product" FORCE)
      FIND_FILE(3RDPARTY_TBB_MALLOC_DLL "${DLL_SO_PREFIX}tbbmalloc${TBB_DEBUG_POSTFIX}.${DLL_SO}" PATHS "${3RDPARTY_TBB_DIR}/${DLL_SO_FOLDER}/${TBB_ARCH_NAME}/${COMPILER}" NO_DEFAULT_PATH)
      
      IF("${3RDPARTY_TBB_MALLOC_DLL}" STREQUAL "3RDPARTY_TBB_MALLOC_DLL-NOTFOUND")
        FIND_FILE(3RDPARTY_TBB_MALLOC_DLL "${DLL_SO_PREFIX}tbbmalloc${TBB_DEBUG_POSTFIX}.${DLL_SO}")
      ENDIF()
    ENDIF()

    MARK_AS_ADVANCED(3RDPARTY_TBB_DIR_NAME)
  ELSE()
    LIST(APPEND 3RDPARTY_NOT_INCLUDED 3RDPARTY_TBB_DIR)
  ENDIF()

  IF(3RDPARTY_TBB_INCLUDE_DIR)
    SET(3RDPARTY_INCLUDE_DIRS "${3RDPARTY_INCLUDE_DIRS};${3RDPARTY_TBB_INCLUDE_DIR}")
  ELSE()
    LIST(APPEND 3RDPARTY_NOT_INCLUDED 3RDPARTY_TBB_INCLUDE_DIR)
  ENDIF()

  IF(3RDPARTY_TBB_LIBRARY)
    GET_FILENAME_COMPONENT(3RDPARTY_TBB_LIBRARY_DIR "${3RDPARTY_TBB_LIBRARY}" PATH)
    SET(3RDPARTY_LIBRARY_DIRS "${3RDPARTY_LIBRARY_DIRS};${3RDPARTY_TBB_LIBRARY_DIR}")
  ELSE()
    LIST(APPEND 3RDPARTY_NOT_INCLUDED 3RDPARTY_TBB_LIBRARY)
  ENDIF()
  
  IF(3RDPARTY_TBB_MALLOC_LIBRARY)
    GET_FILENAME_COMPONENT(3RDPARTY_TBB_LIBRARY_DIR "${3RDPARTY_TBB_MALLOC_LIBRARY}" PATH)
    SET(3RDPARTY_LIBRARY_DIRS "${3RDPARTY_LIBRARY_DIRS};${3RDPARTY_TBB_LIBRARY_DIR}")
  ELSE()
    LIST(APPEND 3RDPARTY_NOT_INCLUDED 3RDPARTY_TBB_MALLOC_LIBRARY)
  ENDIF()
  
  IF(3RDPARTY_TBB_DLL)
    #
  ELSE()
    LIST(APPEND 3RDPARTY_NOT_INCLUDED 3RDPARTY_TBB_DLL)
  ENDIF()
  
  IF(3RDPARTY_TBB_MALLOC_DLL)
    #
  ELSE()
    LIST(APPEND 3RDPARTY_NOT_INCLUDED 3RDPARTY_TBB_MALLOC_DLL)
  ENDIF()
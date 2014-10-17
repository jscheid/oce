# Building with Emscripten

Tested with Emscripten 1.25.0

    # Setup shell for Emscripten use
    source /path/to/emsdk_portable/emsdk_set_env.sh

    # Go to some workspace location
    cd /path/to/some/workspace

    # Clone repository and switch to correct branch
    git clone git@github.com:jscheid/oce.git
    (cd oce && git checkout jscheid/emscripten)

    # Create and change to a build directory (can be anywhere)
    mkdir oce-build
    cd oce-build

    # Create Makefile
    emcmake cmake ../oce \
         -DOCE_BUILD_SHARED_LIB:BOOLEAN=yes \
         -DOCE_COPY_HEADERS_BUILD:BOOLEAN=no \
         -DOCE_DATAEXCHANGE:BOOLEAN=no \
         -DOCE_OCAF:BOOLEAN=no \
         -DOCE_VISUALISATION:BOOLEAN=no \
         -DOCE_WITH_FREEIMAGE:BOOLEAN=no \
         -DOCE_WITH_GL2PS:BOOLEAN=no \
         -DTHREADS_PTHREAD_ARG:STRING="" \
         -B"${PWD}"

    # Build
    emmake make -j4

    # Link and produce JavaScript
    emcc \
        -O0 \
        -s LINKABLE=1 \
        -o oce.js \
        adm/cmake/TKFillet/Unix/-Release-32/libTKFillet.so.7.0.0 \
        adm/cmake/TKBRep/Unix/-Release-32/libTKBRep.so.7.0.0 \
        adm/cmake/TKTopAlgo/Unix/-Release-32/libTKTopAlgo.so.7.0.0 \
        adm/cmake/TKMath/Unix/-Release-32/libTKMath.so.7.0.0 \
        adm/cmake/TKernel/Unix/-Release-32/libTKernel.so.7.0.0 \
        adm/cmake/TKGeomBase/Unix/-Release-32/libTKGeomBase.so.7.0.0 \
        adm/cmake/TKG2d/Unix/-Release-32/libTKG2d.so.7.0.0 \
        adm/cmake/TKG3d/Unix/-Release-32/libTKG3d.so.7.0.0 \
        adm/cmake/TKGeomAlgo/Unix/-Release-32/libTKGeomAlgo.so.7.0.0 \
        adm/cmake/TKShHealing/Unix/-Release-32/libTKShHealing.so.7.0.0 \
        adm/cmake/TKBO/Unix/-Release-32/libTKBO.so.7.0.0 \
        adm/cmake/TKPrim/Unix/-Release-32/libTKPrim.so.7.0.0 \
        adm/cmake/TKBool/Unix/-Release-32/libTKBool.so.7.0.0

    # Output is in ./oce.js


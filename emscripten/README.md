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
    emcmake cmake /path/to/oce \
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
    emmake make -j4 all emscripten

    # Open ./oce.html in your browser


        message(WARNING "Using `glslang-standaloneTargets.cmake` is deprecated: use `find_package(glslang)` to find glslang CMake targets.")

        if (NOT TARGET glslang::glslang-standalone)
            include("C:/j/msdk/build/Glslang/install/RelWithDebInfo-Win32/lib/cmake/glslang/glslang-targets.cmake")
        endif()

        add_library(glslang-standalone ALIAS glslang::glslang-standalone)
    
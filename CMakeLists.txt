cmake_minimum_required(VERSION 4.0)

project(
    CoreProject2025
    VERSION 0.0
    LANGUAGES CXX
    DESCRIPTION "A programming language written in C++")

set(FETCHCONTENT_BASE_DIR ${PROJECT_SOURCE_DIR}/third_party CACHE PATH "Missing description." FORCE)

option(CORE_PROJECT_TESTING "Enable unit tests for CoreProject2025" ON)
if(CORE_PROJECT_TESTING)
    include(CTest)
    include(FetchContent)
    FetchContent_Declare(
        DocTest
        GIT_REPOSITORY "https://github.com/onqtam/doctest"
        GIT_TAG        v2.4.12
    )
    FetchContent_MakeAvailable(DocTest)
    add_compile_definitions(CORE_PROJECT_TESTING)
    add_compile_definitions(ENABLE_DOCTEST_IN_LIBRARY)
    set(DOCTEST_INCLUDE ${PROJECT_SOURCE_DIR}/third_party/doctest-src)
endif()

include(cmake/submodule.cmake)

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_SCAN_FOR_MODULES OFF)

add_compile_options(
    -Werror
    -Wall
    -Wextra
    -Wpedantic
    -Wcast-align
    -Wcast-qual
    -Wconversion
    -Wctor-dtor-privacy
    -Wenum-compare
    -Wfloat-equal
    -Wnon-virtual-dtor
    -Wold-style-cast
    -Woverloaded-virtual
    -Wredundant-decls
    -Wsign-conversion
    -Wsign-promo
)

add_subdirectory(src)

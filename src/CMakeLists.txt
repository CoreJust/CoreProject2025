set(DEPS
    lib_cli)
set(INCLUDES 
    lib/cli/include)
set(SOURCES
    main.cpp)
set(TESTS)

add_subdirectory(lib)
MAIN_MODULE(corec)

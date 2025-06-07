#ifdef CORE_PROJECT_TESTING
#define DOCTEST_CONFIG_IMPLEMENT
#include <doctest/doctest.h>
#endif
#include <print>
#include <core/lib/cli/argument_parser.hpp>

int main(int argc, char** argv) {
#ifdef CORE_PROJECT_TESTING
    doctest::Context context;
    context.applyCommandLine(argc, argv);

    int res = context.run();
    if (context.shouldExit())
        return res;
#endif
    std::println("Hello from CoreProject 2025!");
    return core::lib::cli::ArgumentParser().test();
}

#include <core/lib/cli/argument_parser.hpp>
#include <doctest/doctest.h>

using namespace core::lib::cli;

TEST_CASE("Test") {
    CHECK(ArgumentParser().test() == 0);
}

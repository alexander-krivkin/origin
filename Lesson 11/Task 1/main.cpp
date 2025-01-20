#include <string>

#define CATCH_CONFIG_MAIN
#include <catch2/catch_all.hpp>

#include "extended_array.h"


TEST_CASE("empty array, size()", "[size]")
{
    SECTION("ints")
    {
        ExtArray<int> extArr{};
        REQUIRE(extArr.size() == 0);
    }
    SECTION("bools")
    {
        ExtArray<bool> extArr{};
        REQUIRE(extArr.size() == 0);
    }
    SECTION("floats")
    {
        ExtArray<float> extArr{};
        REQUIRE(extArr.size() == 0);
    }
}

TEST_CASE("empty array, mean()", "[mean]")
{
    SECTION("ints")
    {
        ExtArray<int> extArr{};
        REQUIRE(extArr.mean() == 0);
    }
    SECTION("bools")
    {
        ExtArray<bool> extArr{};
        REQUIRE(extArr.mean() == 0);
    }
    SECTION("floats")
    {
        ExtArray<float> extArr{};
        REQUIRE(extArr.mean() == 0);
    }
}

TEST_CASE("empty array, median()", "[median]")
{
    SECTION("ints")
    {
        ExtArray<int> extArr{};
        REQUIRE(extArr.median() == 0);
    }
    SECTION("bools")
    {
        ExtArray<bool> extArr{};
        REQUIRE(extArr.median() == 0);
    }
    SECTION("floats")
    {
        ExtArray<float> extArr{};
        REQUIRE(extArr.median() == 0);
    }
}
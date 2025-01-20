#include <string>

#define CATCH_CONFIG_MAIN
#include <catch2/catch_all.hpp>

#include "extended_array.h"


TEST_CASE("array, mean(size_t startIdx, size_t endIdx)")
{
    SECTION("ints, all ok")
    {
        ExtArray<int> extArr{1, 2, 4, 7, 9, 11, 13, 21, 22};
        REQUIRE(extArr.mean() == 10);
    }
    SECTION("ints, region, all ok")
    {
        ExtArray<int> extArr{ 1, 2, 4, 7, 9, 11, 13, 21, 22 };
        REQUIRE(extArr.mean(0, 8) == 10);
    }
    SECTION("ints, region, exception")
    {
        ExtArray<int> extArr{ 1, 2, 4, 7, 9, 11, 13, 21, 22 };
        REQUIRE_THROWS(extArr.mean(5, 4));
    }    
    SECTION("ints, region, exception")
    {
        ExtArray<int> extArr{ 1, 2, 4, 7, 9, 11, 13, 21, 22 };
        REQUIRE_THROWS(extArr.mean(1, 4));
    }
}
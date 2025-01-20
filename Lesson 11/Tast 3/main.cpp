#include <string>

#define CATCH_CONFIG_MAIN
#include <catch2/catch_all.hpp>

#include "extended_array.h"


TEST_CASE("array, checkSum()")
{
    SECTION("ints, all ok")
    {
        ExtArray<int> extArr{ 1, 0, 0, 1, 1, 0, 1 };
        REQUIRE(extArr.checkSum() == 4);
    }
    SECTION("bools, all ok")
    {
        ExtArray<bool> extArr{ true, false, false };
        REQUIRE(extArr.checkSum() == 1);
    }
    SECTION("floats")
    {
        ExtArray<float> extArr{ 1.0f, 3.5f, 2.1f };
        REQUIRE_THROWS(extArr.checkSum());
    }    
    SECTION("ints, logic error")
    {
        ExtArray<int> extArr{ 1, 2, 4, 7, 9, 11, 13, 21, 22 };
        REQUIRE_THROWS(extArr.checkSum());
    }
}
#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

extern "C"
{
#include "sum.h"
#include "sumn.h"
#include "fib.h"
}


// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("sumtail")
{
    // Add the tests for excercise 3 "sumtail" function here. Use "REQUIRE()" statement to check. 

    REQUIRE(sumtail(5,0)==15);     // sumtail(5,0) must be 15
    REQUIRE(sumtail(13,0)==91);   // sumtail(13,0) must be 91
    REQUIRE(sumtail(21,0)==231); // sumtail(13,0) must be 91


}

TEST_CASE("sumwhile")
{
    // Add the tests for excercise 3 "sumwhile" function here. Use "REQUIRE()" statement to check. 
    
    REQUIRE(sumwhile(5)==15);     // sumwhile(5) must be 15
    REQUIRE(sumwhile(13)==91);   // sumwhile(13) must be 91
    REQUIRE(sumwhile(21)==231); // sumwhile(21) must be 231

}

TEST_CASE("sumn")
{
    REQUIRE(sumn(1)==1); // sum(1) must be 1
    REQUIRE(sumn(3)==9); //sum(3) = 1+3+5 = 9
    REQUIRE(sumn(33)==1089); //sum(33) = 1+3+5+...+65 = 1089
}

TEST_CASE("fib")
{
   // Add the tests for excercise 4 "fib" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(1==1);
    REQUIRE(2==1);
    REQUIRE(3==2);
    REQUIRE(15==610);


}



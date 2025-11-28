#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/stack.hpp"
#include "../src/dish.hpp"

TEST_CASE( "Test for Dish Stack" ) {
    Stack stack;
    REQUIRE( stack.size() == 0 );
    stack.push(Dish("A dish with one fish pattern on it"));
    REQUIRE( stack.size() == 1 );
    stack.push(Dish("A dish with two fish patterns on it"));
    REQUIRE( stack.size() == 2 );
    stack.push(Dish("A dish with a red fish pattern on it"));
    REQUIRE( stack.size() == 3 );
    stack.push(Dish("A dish with a blue fish pattern on it"));
    REQUIRE( stack.size() == 4 );

    // Now we test the pop and peek 
    REQUIRE( stack.peek().get_description() == "A dish with a blue fish pattern on it" );
    REQUIRE( stack.pop().get_description() == "A dish with a blue fish pattern on it" );
    REQUIRE( stack.size() == 3 );
    REQUIRE( stack.pop().get_description() == "A dish with a red fish pattern on it" );
    REQUIRE( stack.size() == 2 );
    REQUIRE( stack.pop().get_description() == "A dish with two fish patterns on it" );
    REQUIRE( stack.size() == 1 );
    REQUIRE( stack.pop().get_description() == "A dish with one fish pattern on it" );
    REQUIRE( stack.size() == 0 );
    REQUIRE( stack.peek().get_description() == "Empty" );
    REQUIRE( stack.pop().get_description() == "Empty" );
    REQUIRE( stack.size() == 0 );
}

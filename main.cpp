/*
 * A small project to determine whether generators and distributions from C++11's <random> will produce the same
 * sequence of random numbers across different platforms, given the same seed.
 *
 * This project uses the catch unit test framework (https://github.com/philsquared/Catch).
 */

// This tells Catch to provide a main()
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <iostream>
#include "RandomNumberGenerator.hpp"

TEST_CASE( "Mersenne twister", "[mt_generation]" )
{
    // Create a random number generator, seeded at zero
    RandomNumberGenerator gen(0);

    unsigned num_to_burn = 1000;
    for (auto i = 0; i < num_to_burn; ++i)
    {
        gen.GetRandomNumberFromMT();
    }

    REQUIRE(gen.GetRandomNumberFromMT() == 1333075495);
    REQUIRE(gen.GetRandomNumberFromMT() == 1193028842);
    REQUIRE(gen.GetRandomNumberFromMT() == 1602172539);
    REQUIRE(gen.GetRandomNumberFromMT() == 3843408156);
    REQUIRE(gen.GetRandomNumberFromMT() == 2254730904);
    REQUIRE(gen.GetRandomNumberFromMT() == 113913490);
    REQUIRE(gen.GetRandomNumberFromMT() == 3223781059);
    REQUIRE(gen.GetRandomNumberFromMT() == 2687088812);
    REQUIRE(gen.GetRandomNumberFromMT() == 1432403667);
    REQUIRE(gen.GetRandomNumberFromMT() == 1415375149);
    REQUIRE(gen.GetRandomNumberFromMT() == 3969231670);
    REQUIRE(gen.GetRandomNumberFromMT() == 4153753600);
    REQUIRE(gen.GetRandomNumberFromMT() == 3703629962);
    REQUIRE(gen.GetRandomNumberFromMT() == 724030147);
    REQUIRE(gen.GetRandomNumberFromMT() == 209123206);
    REQUIRE(gen.GetRandomNumberFromMT() == 3871839963);
    REQUIRE(gen.GetRandomNumberFromMT() == 1089386339);
    REQUIRE(gen.GetRandomNumberFromMT() == 1417062841);
    REQUIRE(gen.GetRandomNumberFromMT() == 1916137414);
    REQUIRE(gen.GetRandomNumberFromMT() == 3819228051);
    REQUIRE(gen.GetRandomNumberFromMT() == 449373346);
    REQUIRE(gen.GetRandomNumberFromMT() == 2200963122);
    REQUIRE(gen.GetRandomNumberFromMT() == 1496692978);
    REQUIRE(gen.GetRandomNumberFromMT() == 2193134438);
    REQUIRE(gen.GetRandomNumberFromMT() == 3178694676);
}
#pragma once

#include <random>

class RandomNumberGenerator
{
private:
    /** The main random number generator. **/
    std::mt19937 mMersenneTwister;

public:

    explicit RandomNumberGenerator(unsigned seed)
            : mMersenneTwister(seed)
    {
    }

    unsigned long GetRandomNumberFromMT()
    {
        return mMersenneTwister();
    }
};

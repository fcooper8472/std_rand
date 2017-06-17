#pragma once

#include <random>

class RandomNumberGenerator
{
private:
    /** The main random number generator. **/
    std::mt19937 mMersenneTwister;

    /** The normal distribution */
    std::normal_distribution<double> mGenerateStandardNormal;

public:

    explicit RandomNumberGenerator(unsigned seed)
            : mMersenneTwister(seed),
              mGenerateStandardNormal(0.0, 1.0)
    {
    }

    unsigned long GetRandomNumberFromMT()
    {
        return mMersenneTwister();
    }

    double StandardNormalRandomDeviate()
    {
        return mGenerateStandardNormal(mMersenneTwister);
    }
};

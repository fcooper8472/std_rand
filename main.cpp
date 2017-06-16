#include <iostream>
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

    unsigned long GetRandomNumber()
    {
        return mMersenneTwister();
    }

};

bool TestMersenneTwister()
{
    bool good_test = true;

    RandomNumberGenerator gen(0u);

    good_test = good_test && gen.GetRandomNumber() == 2357136044ul;

    return good_test;
}

int main()
{
    std::cout << "Hello, World!" << std::endl;

    RandomNumberGenerator gen(0u);

    std::cout << "Entering TestMersenneTwister" << std::endl;
    if (TestMersenneTwister())
        std::cout << "\tPassed" << std::endl;
    else
        std::cout << "\tFailed" << std::endl;

    return 0;
}
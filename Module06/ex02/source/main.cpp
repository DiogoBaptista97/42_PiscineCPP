#include "../header/Base.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

int main()
{
    // Seed the random number generator (usually done once in the program)
    srand(static_cast<unsigned int>(time(NULL)));
	Base *guess = generate();
	identify(guess);
	identify(*guess);
	return 0;
}
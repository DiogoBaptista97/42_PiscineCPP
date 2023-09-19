#pragma once

#include <iostream>
#include <string>

class Fixed
{
    private:
        int _fixed;
        static const int _bit = 8;
    public:
        Fixed(void);
        ~Fixed(void);
        Fixed(const Fixed &copy);
        int getRawBits(void) const;
        //operator overloading
        Fixed& operator=(const Fixed &copy);
};
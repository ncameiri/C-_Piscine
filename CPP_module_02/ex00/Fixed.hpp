#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>
//https://www.francescmm.com/orthodox-canonical-class-form/
class Fixed
{
private:
    int value;
    static const int frac_bits;
public:
    Fixed();
    ~Fixed();

    //COPY CONSTRUCTOR
    Fixed(Fixed const &to_copy); 

    //COPY ASSIGNMENT OPERATOR (ASSIGNATION OPERATOR CALLED)
    Fixed & operator = (const Fixed & to_copy);

    int getRawBits();
    void setRawBits(int const raw);
};

#endif
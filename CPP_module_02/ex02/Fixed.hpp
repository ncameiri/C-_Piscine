#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>
#include <cmath>
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

    //COPY ASSIGNMENT OPERATOR (ASSIGNATION OPERATOR OVERLOAD)
    Fixed & operator = (Fixed const & to_copy);

    int getRawBits(void) const;
    void setRawBits(int const raw);

    //EX01
    Fixed(const int nmr);

    Fixed(const float nmr);

    float toFloat(void) const;

    int toInt(void) const;

    //EX02

    //6 comparison operators
	int operator>(Fixed const &elem) const;
	int operator<(Fixed const &elem) const;
	int operator>=(Fixed const &elem) const;
	int operator<=(Fixed const &elem) const;
	int operator==(Fixed const &elem) const;
	int operator!=(Fixed const &elem) const;

	//4  arithmetic operators
	Fixed operator+(Fixed const &elem) const;
	Fixed operator-(Fixed const &elem) const;
	Fixed operator*(Fixed const &elem) const;
	Fixed operator/(Fixed const &elem) const;

	//increment					
	Fixed & operator++();				//pre-inc
	Fixed operator++(int);				//post-inc
	
	//decrement
	Fixed & operator--();				//pre-dec
	Fixed operator--(int);				//post-dec

    // min
	static Fixed & min(Fixed & a, Fixed & b);
	static Fixed const & min(Fixed const & a, Fixed const & b);

	// max
	static Fixed & max(Fixed & a, Fixed & b);
	static Fixed const & max(Fixed const & a, Fixed const & b);
    
};
//overload to << operator
std::ostream & operator <<(std::ostream  & ost, Fixed const & nmr);
#endif
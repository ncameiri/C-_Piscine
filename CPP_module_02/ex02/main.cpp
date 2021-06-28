#include "Fixed.hpp"
int main(void) {
/*
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );


std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;

std::cout << b << std::endl;

std::cout << Fixed::max( a, b ) << std::endl;
*/
Fixed N(39.489f);
Fixed K(38);

std::cout<<N.getRawBits()<<"\n"<<N.toFloat()<<"\n"<<N;
std::cout<<"\n"<<K;
return 0;
}
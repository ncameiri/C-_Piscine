#include "Fixed.hpp"

const int Fixed::frac_bits = 8;

Fixed::Fixed():value(0) 
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &to_copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = to_copy;
}

int Fixed::getRawBits(void) const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}

Fixed &Fixed::operator = (Fixed const & to_copy){
   std::cout << "Assignation operator called" << std::endl;
    if (this != &to_copy)
        this->value = to_copy.getRawBits();
    return (*this);
}
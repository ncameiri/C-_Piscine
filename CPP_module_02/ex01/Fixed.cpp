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

/*EX01*/

Fixed::Fixed(const int nmr){
    std::cout << "Int constructor called" << std::endl;
    value =nmr << frac_bits;
//PARTE DE TESTES PARA VER VALUE
std::cout /*<<std::dec*/<< value<<"\n";
//value = nmr >> frac_bits;
std::cout << value<<"\n";
}


Fixed::Fixed(const float nmr){
value = roundf(nmr * (1 << frac_bits));
}


float Fixed::toFloat() const {
	return ((float)(this->value) / (1 << frac_bits));
}

int Fixed::toInt() const {
    return(this->value >> frac_bits);
}

std::ostream & operator<<( std::ostream & ost, Fixed const & nb){
	ost << nb.toFloat();
	return ost;
}


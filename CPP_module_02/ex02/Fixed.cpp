#include "Fixed.hpp"

const int Fixed::frac_bits = 8;

Fixed::Fixed():value(0) 
{
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
   // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &to_copy)
{
   // std::cout << "Copy constructor called" << std::endl;
    *this = to_copy;
}

int Fixed::getRawBits(void) const 
{
    //std::cout << "getRawBits member function called" << std::endl;
    return(this->value);
}

void Fixed::setRawBits(int const raw)
{
   // std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}

Fixed &Fixed::operator = (Fixed const & to_copy){
  // std::cout << "Assignation operator called" << std::endl;
        this->value = to_copy.getRawBits();
    return (*this);
}

/*EX01*/

Fixed::Fixed(const int nmr){
   // std::cout << "Int constructor called" << std::endl;
    value =nmr << frac_bits;
}


Fixed::Fixed(const float nmr){
  //  std::cout << "Float constructor called" << std::endl;
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

/*EX02*/

//6 comparison operators

int Fixed::operator>(Fixed const &elem) const{
    return (this->toFloat() > elem.toFloat());
}

int Fixed::operator<(Fixed const &elem) const{
     return (this->toFloat() < elem.toFloat());
}

int Fixed::operator>=(Fixed const &elem) const{
    return (this->toFloat() >= elem.toFloat());
}

int Fixed::operator<=(Fixed const &elem) const{
    return (this->toFloat() <= elem.toFloat());
}

int Fixed::operator==(Fixed const &elem) const{
    return (this->toFloat() == elem.toFloat());
}

int Fixed::operator!=(Fixed const &elem) const{
    return (this->toFloat() != elem.toFloat());
}

//4  arithmetic operators
Fixed Fixed::operator+(Fixed const &elem) const{
    return (Fixed(this->toFloat() + elem.toFloat())); 
}

Fixed Fixed::operator-(Fixed const &elem) const{
    return (Fixed(this->toFloat() - elem.toFloat())); 
}

Fixed Fixed::operator*(Fixed const &elem) const{
    return (Fixed(this->toFloat() * elem.toFloat())); 
}

Fixed Fixed::operator/(Fixed const &elem) const{
    return (Fixed(this->toFloat() / elem.toFloat())); 
}

//increment
//pre
Fixed & Fixed::operator++(){
    value +=1;
    return (*this);
}

//post
Fixed Fixed::operator++(int){
    Fixed tmp(*this);
    ++(*this);
    return(tmp);
}

//decrement
//pre
Fixed & Fixed::operator--(){
    value -=1;
    return (*this);
}

//post
Fixed Fixed::operator--(int){
    Fixed tmp(*this);
    --(*this);
    return(tmp);
}

//min 
Fixed &Fixed::min(Fixed &a, Fixed &b){
	return (a < b ? a : b);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b){
	return (a < b ? a : b);
}

//max
Fixed &Fixed::max(Fixed &a, Fixed &b){
	return (a > b ? a : b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b){
	return (a > b ? a : b);
}

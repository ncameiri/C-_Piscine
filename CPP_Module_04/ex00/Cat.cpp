#include "Cat.hpp"
Cat::Cat(/* args */):Animal("Cat")
{
}

Cat::~Cat()
{
}

Cat::Cat (Cat const &to_copy):Animal("Cat"){
    *this = to_copy;
}

Cat &Cat::operator= (Cat const &to_copy){
    this->type = to_copy.type;
    return (*this);
}
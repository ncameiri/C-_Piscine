#include"Dog.hpp"
Dog::Dog():Animal("Dog")
{
}

Dog::~Dog()
{
}

Dog::Dog (Dog const &to_copy):Animal("Dog"){
    *this = to_copy;
}

Dog &Dog::operator= (Dog const &to_copy){
    this->type = to_copy.type;
    return (*this);
}

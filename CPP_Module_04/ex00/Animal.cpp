#include "Animal.hpp"
Animal::Animal(){

}
Animal::Animal(std::string type_set):type(type_set)
{
}

Animal::~Animal()
{
}

Animal::Animal (Animal const &to_copy){
    *this = to_copy;
}

Animal &Animal::operator= (Animal const &to_copy){
    this->type = to_copy.type;
    return (*this);
}

void Animal::makeSound() const{
        std::cout<<"Wrong Animal Sound\n";
}

std::string Animal::getType() const{
    return (this->type);
}
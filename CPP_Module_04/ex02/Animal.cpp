#include "Animal.hpp"
Animal::Animal(){
 std::cout<<"Animal default constructor\n";
}
Animal::Animal(std::string type_set):type(type_set)
{
    std::cout<<"Animal type constructor\n";
}

Animal::~Animal()
{
    std::cout<<"Animal default destructor\n";
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
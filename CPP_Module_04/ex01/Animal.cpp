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
    if(this->type == "Dog")
        std::cout<<"auf auf\n";
    else if(this->type == "Cat")
        std::cout<<"ANIM CALL - miau miau\n";
    else
        std::cout<<"Wrong Animal Sound\n";


}

std::string Animal::getType() const{
    return (this->type);
}
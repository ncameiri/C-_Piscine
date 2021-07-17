#include"Dog.hpp"
Dog::Dog():Animal("Dog")
{
     std::cout<<"Dog default constructor\n";
    this->brain = new Brain();
}

Dog::~Dog()
{
     std::cout<<"Dog default destructor\n";
    delete this->brain;
}

Dog::Dog (Dog const &to_copy):Animal("Dog"){
    *this = to_copy;
}

Dog &Dog::operator= (Dog const &to_copy){
    this->type = to_copy.type;
    return (*this);
}

void Dog::makeSound()const{
    std::cout<<"DOG CALL - auf auf\n";
  // (this)->Animal::makeSound();
}

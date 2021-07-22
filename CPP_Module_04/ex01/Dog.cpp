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
   std::cout<<"Dog Copy constructor\n";
     Brain const *tmp = to_copy.brain; 
    this->brain = new Brain(*tmp);
}

Dog &Dog::operator= (Dog const &to_copy){
    this->type = to_copy.type;
    return (*this);
}

void Dog::makeSound()const{
    std::cout<<"DOG CALL - auf auf\n";
  // (this)->Animal::makeSound();
}

#include "Cat.hpp"
Cat::Cat(/* args */):Animal("Cat")
{
    std::cout<<"Cat default constructor\n";
    this->brain = new Brain();
}

Cat::~Cat()
{
    std::cout<<"Cat default destructor\n";
    delete this->brain;
}
//Como e deep vai criar um novo brain
Cat::Cat (Cat const &to_copy):Animal("Cat"){
    Brain const *tmp = to_copy.brain; 
    this->brain = new Brain(*tmp);
}

Cat &Cat::operator= (Cat const &to_copy){
    this->type = to_copy.type;
    return (*this);
}
 
void Cat::makeSound()const{
    std::cout<<"CAT CALL - miau miau\n";
  // (this)->Animal::makeSound();
}
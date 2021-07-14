#include "Cat.hpp"
Cat::Cat(/* args */):Animal("Cat")
{
    this->brain = new Brain();
}

Cat::~Cat()
{
    delete this->brain;
}

Cat::Cat (Cat const &to_copy):Animal("Cat"){
    *this = to_copy;
}

Cat &Cat::operator= (Cat const &to_copy){
    this->type = to_copy.type;
    return (*this);
}
 
void Cat::makeSound()const{
    std::cout<<"CAT CALL - miau miau\n";
  // (this)->Animal::makeSound();
}
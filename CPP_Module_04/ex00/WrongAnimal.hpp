#ifndef WRONG_ANIMAL   
#define WRONG_ANIMAL
#include <iostream>
class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(std::string type_set);
    ~WrongAnimal();

    void makeSound()const;
    
    
};



#endif
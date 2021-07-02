#include "Peon.hpp"
Peon::Peon(std::string name): Victim(name)
{
    std::cout<<"Zog zog.\n";
}

Peon::~Peon()
{
    std::cout<<"Bleuark...\n";
}

void Peon::getPolymorphed() const{
    std::cout<<this->getName()<<" has been turned into a pinky pony!\n";
}
#include "Brain.hpp"
Brain::Brain(/* args */)
{
    return;
}

Brain::~Brain()
{
    return;
}

std::string Brain::identify() const{
    std::stringstream id;
    id<<this;
    return id.str();
}
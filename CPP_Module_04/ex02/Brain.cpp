#include "Brain.hpp"
Brain::Brain(/* args */)
{
}

Brain::~Brain()
{
}

Brain::Brain (Brain const &to_copy){
    *this = to_copy;
}

/*Brain &Brain::operator= (Brain const &to_copy){
    *this->ideas = to_copy.ideas;
    return (*this);
}*/
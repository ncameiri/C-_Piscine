#include "Brain.hpp"
Brain::Brain()
{
    std::cout << "Brain Default Const\n";
    for( int i=0 ; i<99 ; i++){
        this->ideas[i] = "\0";
    }
}

Brain::~Brain()
{
}

Brain::Brain (Brain const &to_copy){
    
    std::cout << "Brain Copy Const\n";
    for( int i=0 ; i<99 ; i++){
        this->ideas[i] = to_copy.ideas[i];
    }
}

/*Brain &Brain::operator= (Brain const &to_copy){
    *this->ideas = to_copy.ideas;
    return (*this);
}*/
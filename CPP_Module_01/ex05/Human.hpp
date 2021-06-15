#ifndef HUMAN_HPP
#define HUMAN_HPP
#include "Brain.hpp"
class Human
{
    private:
    //Brain *brain;
    //const std::string Brain;
    
    public:
    Human(/* args */);
    ~Human();
    std::string identify() const;
    Brain const brain;
    //Brain::Brain getBrain();
    Brain const &getBrain() const; 
};


#endif
#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <sstream>
#include <string>
class Brain
{
    private:
    unsigned int no_of_neurons;
    
    public:
    Brain(/* args */);
    ~Brain();
    std::string identify() const;
};


#endif
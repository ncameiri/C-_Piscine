#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP
#include <iostream>
#include "AMateria.hpp"
class IMateriaSource
{
private:
    /* data */
public:
    IMateriaSource(/* args */);


    virtual ~IMateriaSource();
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

IMateriaSource::IMateriaSource(/* args */)
{
}

IMateriaSource::~IMateriaSource()
{
}


#endif
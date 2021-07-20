#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    /* data */
public:
    MateriaSource(/* args */);
    MateriaSource(const MateriaSource &src);
    virtual ~MateriaSource();
};



#endif

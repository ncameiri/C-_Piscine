#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include <iostream>
#include <string>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    int max_source;
    AMateria *sources[4];
public:
    MateriaSource();
    MateriaSource(const MateriaSource &src);
    virtual ~MateriaSource();

    void			learnMateria(AMateria *m);
	AMateria		*createMateria(const std::string &type);
};



#endif

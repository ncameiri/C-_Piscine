#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include "ICharacter.hpp"
class AMateria
{
private:
    /* data */
public:
    AMateria(std::string const & type);
    AMateria(/* args */);
    ~AMateria();

    //RETURNS MATERIA TYPE
    std::string const & getType() const;

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};



#endif 
#ifndef AMATERIA_HPP
#define AMATERIA_HPP
# include <iostream>
# include <string>
class AMateria;
#include "ICharacter.hpp"

class AMateria
{
private:
    /* data */
public:
    AMateria(std::string const & type);
    AMateria(/* args */);
    virtual ~AMateria();

    //RETURNS MATERIA TYPE
    std::string const & getType() const;
    
    unsigned int get_xp() const;
    
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};



#endif 
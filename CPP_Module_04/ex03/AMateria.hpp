#ifndef AMATERIA_HPP
#define AMATERIA_HPP
# include <iostream>
# include <string>
class AMateria;
#include "ICharacter.hpp"

class AMateria
{
private:
    std::string			type;
public:
    AMateria(std::string const & type);
    AMateria(/* args */);
    virtual ~AMateria();

    AMateria    &operator=(const AMateria &to_copy);
    //RETURNS MATERIA TYPE
    std::string const & getType() const;
    
   

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter &target);
};



#endif 
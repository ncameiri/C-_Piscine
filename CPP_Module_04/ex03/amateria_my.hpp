#ifndef AMATERIA_MY_HPP
#define AMATERIA_MY_HPP
#include"AMateria.hpp"
class amateria_my: public AMateria
{
    std::string type;
public:
    amateria_my(std::string in_type);
    virtual ~amateria_my();
    AMateria    *clone() const;
    void		use(ICharacter &target);
};


    
#endif
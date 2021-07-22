#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP
#include "AMateria.hpp"

class IMateriaSource  //Abstract Class usada para ser 
//uma class base contem pelo menos uma pure virtual func
//Todas as classes derivadas serao abstratas ate que todas a funcoes virtuais sejam substituidas
{
public:
    
    virtual ~IMateriaSource(){} ; // {} para o compilador aceitar como funçao definida
     // Pure virtual function = 0
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria *createMateria(const std::string  &type) = 0;
};

#endif
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "amateria_my.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
int main(){

    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    //TEST IMPROVEMENT
    std::cout<<"\nunequip - materia Cure\n";
    me->unequip(1);
    me->use(0, *bob);
    me->use(1, *bob);

    //Volto a equipar ice para nao existir leaks;
    me->equip(tmp);
  
   std::cout<<"\nMy custom Materia\n";
    src->learnMateria(new amateria_my("fire"));
    tmp = src->createMateria("fire");
    me->equip(tmp);
    me->use(2, *bob);

    delete bob;
    delete me;
    delete src;
    return 0;
}
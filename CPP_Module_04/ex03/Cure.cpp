#include "Cure.hpp"
Cure::Cure():AMateria("cure")
{
}

Cure::~Cure()
{
}
AMateria *Cure::clone(void) const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout <<"* heals "<< target.getName() <<"'s wounds *\n";
}

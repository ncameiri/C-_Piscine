#include "Ice.hpp"
Ice::Ice():AMateria("ice")
{	
}

Ice::~Ice()
{
}
AMateria *Ice::clone(void) const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout <<"* shoots an ice bolt at "<< target.getName() <<" *\n";
}

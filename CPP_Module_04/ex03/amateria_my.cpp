#include "amateria_my.hpp"
amateria_my::amateria_my(std::string in_type):AMateria(in_type)
{
    this->type=in_type;
}

amateria_my::~amateria_my()
{
}
AMateria *amateria_my::clone(void) const
{
	return (new amateria_my(*this));
}

void amateria_my::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout <<"* "<< target.getName() <<" has been afected by "<<this->type<<" *\n";
}

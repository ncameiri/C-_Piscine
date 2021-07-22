#include "AMateria.hpp"
AMateria::AMateria(const std::string &type_in)
{
	this->type=type_in;
}
AMateria &AMateria::operator=(const AMateria &to_copy)
{
	this->type = to_copy.getType();
	return (*this);
}

AMateria::~AMateria()
{
}

const std::string &AMateria::getType(void) const
{
	return (this->type);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}

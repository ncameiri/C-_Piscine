#include "ICharacter.hpp"
ICharacter::ICharacter(/* args */)
{
}

ICharacter::~ICharacter()
{
}


void ICharacter::use(int idx, ICharacter& target){
    
}
/*
void	ICharacter::unequip(int idx)
{
	if (idx >= _idx || _materia[idx] == 0)
	{
		std::cout << "It's empty!" << std::endl;
		return ;
	}
	_materia[idx] = 0;
}*/
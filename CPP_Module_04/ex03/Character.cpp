#include "Character.hpp"
Character::Character(std::string name_in):max_inventory(0),name(name_in)
{
}

Character::Character(const Character &to_copy):max_inventory(0),name(to_copy.name)
{
	//Deep copy aloca os elementos de inventario de novo
	for (int i = 0; i < to_copy.max_inventory; i++)
		this->equip(to_copy.inventory[i]->clone());
	for (int i = this->max_inventory; i < 4; i++)
		this->inventory[i] = 0;
}

Character &Character::operator=(const Character &to_copy)
{
	this->name = to_copy.name;
	for (int i = 0; i < this->max_inventory; i++)
		delete this->inventory[i];
	this->max_inventory = 0;
	for (int i = 0; i < to_copy.max_inventory; i++)
		this->equip(to_copy.inventory[i]->clone());
	for (int i = this->max_inventory; i < 4; i++)
		this->inventory[i] = 0;
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < this->max_inventory; i++)
	{
		if (this->inventory[i] != 0)
			delete this->inventory[i];
	}
}


const std::string &Character::getName(void) const
{
	return (this->name);
}

void Character::equip(AMateria *m)
{
	if (m == NULL || this->max_inventory == 4)
		return ;
	//Verificar se ja esta equipado
	for (int i = 0; i < this->max_inventory; i++)
	{
		if (this->inventory[i] == m)
			return ;
	}
	this->inventory[this->max_inventory++] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= this->max_inventory || this->inventory[idx] == NULL)
		return ;
	//limpar o leak do elemento desequipado
	//delete this->inventory[idx];
	for (int i = idx; i < 3; i++)
	{
		this->inventory[i] = this->inventory[i + 1];
		this->inventory[i + 1]=0;
	}	
	this->max_inventory--;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= this->max_inventory || this->inventory[idx] == 0)
		return ;
	
	//Chama o Use do Amateria que vai reencaminhar para o elemento
	//especifico por ser virtual no Amateria
	this->inventory[idx]->use(target);
}

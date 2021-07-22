
#include "MateriaSource.hpp"


MateriaSource::MateriaSource():max_source(0)
{
	for (int i = 0; i < 4; i++)
		this->sources[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other):
	max_source(0)
{
	for (int i = 0; i < other.max_source; i++)
		this->learnMateria(other.sources[i]->clone());
	for (int i = 0; i < 4; i++)
		this->sources[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->max_source; i++)
		delete this->sources[i];
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->max_source  == 4 || m == NULL)
		return ;
	for (int i = 0; i < this->max_source; i++)
	{
		if (this->sources[i] == m)
			return ;
	}
	this->sources[this->max_source++] = m;
}

AMateria* MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < this->max_source; i++)
	{
		if (this->sources[i]->getType() == type)
			return (this->sources[i]->clone());
	}
	return (0);
}

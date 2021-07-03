#include"Sorcerer.hpp"
Sorcerer::Sorcerer(std::string in_name, std::string in_title)
{
    this->Name = in_name;
    this->Title = in_title;
    std::cout<< this->Name << ", "<<this->Title<<", is born!\n";
}

Sorcerer::~Sorcerer()
{
    std::cout<< this->Name << ", "<<this->Title<<
    ", is dead. Consequences will never be the same!\n";
}

Sorcerer::Sorcerer(const Sorcerer &to_copy){
   *this=to_copy;
   // Sorcerer(to_copy.getName(),to_copy.getTitle());
}

Sorcerer &Sorcerer::operator =(Sorcerer const &to_copy){
    this->Name = to_copy.Name;
    this->Title = to_copy.Title;
    return (*this);
}

std::string Sorcerer::getName() const{
    return(this->Name);
}

std::string Sorcerer::getTitle() const{
    return(this->Title);
}
void Sorcerer::polymorph(Victim const & victim) const{
    victim.getPolymorphed();
}

std::ostream & operator <<( std::ostream & ost, Sorcerer const & elem){
	ost <<"I am "<<elem.getName()<<", "<<elem.getTitle()<<", and I like ponies!\n";
	return ost;
}
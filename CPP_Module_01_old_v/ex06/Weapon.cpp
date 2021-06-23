#include "Weapon.hpp"

Weapon::Weapon(std::string type_to_set):type(type_to_set){
return;
}

Weapon::~Weapon(){
return;
}

std::string const &Weapon::getType(){
return (this->type);
}


void Weapon::setType(std::string type_set){
    (*this).type = type_set;
}
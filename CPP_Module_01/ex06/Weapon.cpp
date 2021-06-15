#include "Weapon.hpp"

Weapon::Weapon(/* args */)/*:type("ola")*/{
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
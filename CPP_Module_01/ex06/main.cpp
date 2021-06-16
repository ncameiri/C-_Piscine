#include "HumanB.hpp"
int main(){
    
    Weapon wep1("SEM ARMA");
     Weapon wep2("SEM ARMA");
    wep1.setType("escudo");
     wep2.setType("viseira");
    //std::cout<<wep1.getType()<<"\n";
    //std::cout<<wep2.getType();

    HumanA Joao("joao",wep1);
    Joao.attack();

    HumanB ze("Zé",wep2);
    ze.attack();
    return 0;
}
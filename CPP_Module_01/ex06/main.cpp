#include "HumanB.hpp"
int main(){
    
    Weapon wep1;
     Weapon wep2;
    wep1.setType("escudo");
     wep2.setType("viseira");
    std::cout<<wep1.getType();
   
    std::cout<<wep2.getType();
    return 0;
}
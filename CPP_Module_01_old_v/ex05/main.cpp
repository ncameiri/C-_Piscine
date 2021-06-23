#include "Human.hpp"
int main(){
Human bob;
std::cout << bob.identify() << std::endl;
std::cout << bob.getBrain().identify() << std::endl;
Human john;
std::cout << john.identify() << std::endl;
std::cout << john.getBrain().identify() << std::endl;
/*Brain Teste;
std::cout<<Teste.identify();*/
return (0);
}
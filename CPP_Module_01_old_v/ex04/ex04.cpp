#include <iostream>
#include <string>

int main(){
    std::string asked_str = "HI THIS IS BRAIN";
    std::string *ptr = &asked_str; 
    std::string &ref = asked_str;
    std::cout << *ptr << "\n" << ref << "\n";
    return (0);
}
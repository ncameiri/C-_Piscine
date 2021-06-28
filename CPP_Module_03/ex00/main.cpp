#include"ClapTrap.hpp"
// https://www.youtube.com/watch?v=oz3f-ms-AJs
// https://github.com/aorji/42-CPP-pool/blob/master/d03/ex00/FragTrap.cpp
int main()
{
    ClapTrap B("player B");
    ClapTrap A("player A");
    A=B;
    B.attack("TTT");
    A.attack("Aaa");
}
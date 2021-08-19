#ifndef SCALAR_HPP
# define SCALAR_HPP
#include <iostream>
#include <iomanip>
#include <cstring>
#include <stdexcept>
#include <cfloat>
//INT pode ir a char desde 32-126 
//INT MAX __INT MIN
//No caso de float ou doble parte inteira para int e se possivel para char
//Descartar 0's a esquerda
// inf inff com +-
//nan e nanf com +-
//Nao permitir duplos sinais
//precision 7
class Scalar
{
private:
   std::string const str;
   int const precision;
public:
    Scalar(std::string &in);
    ~Scalar();
    int prec(std:: string in);
};




#endif
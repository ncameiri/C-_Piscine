#ifndef SCALAR_HPP
# define SCALAR_HPP
#include <iostream>
#include <iomanip>
#include <cstring>
#include <stdexcept>
#include <cfloat>
#include <cmath>
#include <limits>
#include <climits>
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
    int int_digits;
    int precision;
    int flt_prc;
    int dbl_prc;
    bool valid_char;
    bool valid_int;
    bool valid_float;
    bool valid_double;
    char char_rep;
    double double_rep;

public:
    Scalar(std::string &in);
    ~Scalar();
    int prec(std:: string in);

    bool char_conv() ;
    bool int_conv() ;
    bool double_conv() ;

    int check_others_num(std::string in);  

    void set_precision_flt();
    void set_precision_dbl();
    void numb_printer();





};




#endif
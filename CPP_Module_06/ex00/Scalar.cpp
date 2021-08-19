#include "Scalar.hpp"
Scalar::Scalar(std::string &in) : str(in),precision(prec(in))
{   
   /* this.str = in;
    this->precision = prec(in);*/
    std::cout<< this->precision<<"  outro  "<< this->str;
}

Scalar::~Scalar()
{
}

int Scalar::prec(std::string in){

    char const *s = in.data();
    int beg=0, end=0, ret=0;

    while (s[beg] && s[beg] != '.')
        beg++;
    if(s[beg + 1])
    end = beg + 1;
    while (s[end] && isdigit(s[end]))
        end++;
    if(beg == strlen(s) || end==beg)
        return 0;
    else
        return (end - beg - 1);

}
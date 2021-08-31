#include "Scalar.hpp"

Scalar::Scalar(std::string &in) : str(in),precision(prec(in))
{   
    if(in.length() == 1 && !(isdigit(in.data()[0])))
    {
        valid_char=true;
        valid_int=true;
        valid_double=true;
        valid_float=true;
        double_rep=static_cast<int>(in.data()[0]);
        return;
    }
    this->double_rep = atof(in.data());
    if(!double_rep && precision == -1 || precision == -2)
    {
        valid_char=false;
        valid_int=false;
        valid_double=false;
        valid_float=false;
        return;
    }
    valid_double=true;
    valid_char=char_conv();
    valid_int=int_conv();
    valid_float=true;
    if(check_others_num(in) == 1)
    {
        valid_int=false;
        precision = 0;
    }
}

Scalar::~Scalar()
{
}



bool Scalar::int_conv() {
    if(double_rep > INT_MAX || double_rep < INT_MIN )
        return false;
    else
        return true;
    
}

bool Scalar::char_conv() {
    char aux;
   
    aux = static_cast<char>(double_rep);
    if(std::isprint(aux))
        return true;
    else 
        return false;
}

int Scalar::check_others_num(std::string in){
    std::string to_check [6] ={
        "nan",
        "nanf",
        "+inf",
        "-inf",
        "+inff",
        "-inff"
    };
    for(int i=0;i<6;i++){
        if(in == to_check[i])
        {
            return 1;
        }
    }
    return 0;
}

int Scalar::prec(std::string in){

    char const *s = in.data();
    int_digits=1;
    int beg=0, end=0;
    if(in.length() == 1 && isdigit(s[beg]))
        return 0;
    if(in.length() == 2 && isdigit(s[beg]) && s[beg+1]=='f')
        return 0;
    while (s[beg] && s[beg] != '.' && isdigit(s[beg]))
        beg++;
    int_digits=beg+1;
    if(beg == 0 && !isdigit(s[beg]) && s[beg]!='f' && s[beg]!='.')
        return -1;
    if(s[beg] == '.')
        end = beg + 1;
    while (s[end] && isdigit(s[end]))
        end++;
    if(s[end] && s[end]!='f')
        return -2;
    if(beg == strlen(s) || end==(beg + 1))
        return 1;
    else
        return (end - beg - 1);
}

void Scalar::set_precision_flt(){
    
    typedef std::numeric_limits< float > flt;
    std::cout.precision(flt::max_digits10);
    int a;
    if(int_digits + precision > 9)
    {
        a = 9 - int_digits;
        if(a > 0)
            flt_prc = a;
        else 
            flt_prc = 1;
    }
    else if(precision == 0 || precision == -1)
        flt_prc=1;
    else 
        flt_prc = precision;
    
        std::cout<<std::setprecision(flt_prc);
}

void Scalar::set_precision_dbl(){
    
    typedef std::numeric_limits< double > dbl;
    std::cout.precision(dbl::max_digits10);
    int a;
    if(int_digits + precision > 9)
    {
        a = 9 - int_digits;
        if(a > 0)
            dbl_prc = a;
        else 
            dbl_prc = 1;
    }
   else if(precision == 0 || precision == -1)
        dbl_prc=1;
    else 
        dbl_prc = precision;
    std::cout<<std::setprecision(dbl_prc);
}


void Scalar::numb_printer(){
    if(!valid_int && !valid_char && !valid_double && !valid_float)
    {
        std::cout<<"Impossible Argument Conversion For any type"<<std::endl;
        return;
    }
    std::cout<<"String: "<<str<<std::endl<<std::endl;
    if(valid_char)
        std::cout<<"  char: '"<<static_cast<char>(double_rep)<<"'"<<std::endl;
    else
        std::cout<<"  char: Impossible conv"<<std::endl;
    if(valid_int)
        std::cout<<"   int: "<<static_cast<int>(double_rep)<<std::endl;
    else
        std::cout<<"   int: Impossible conv"<<std::endl;
    std::cout<<std::fixed;
    set_precision_flt();
    
    if(valid_float)
        std::cout<<" float: "<<static_cast<float>(double_rep)<<"f"<<std::endl;
    else
        std::cout<<" float: Impossible conv"<<std::endl;
    set_precision_dbl();
        
    if(valid_double)
        std::cout<<"double: "<<double_rep<<std::endl;
    else
        std::cout<<"double: Impossible conv"<<std::endl;


}

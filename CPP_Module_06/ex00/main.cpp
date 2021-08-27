#include "Scalar.hpp"


int main(int argc,char  **argv){
   if(argc !=2)
   {
      std::cout<<"Wrong number of Arguments\n";
      return 1;
   }
   std::string b;
   b = argv[1];
   Scalar a(b);
   a.numb_printer();
   
   /* float af;
    std::string a;
    a=argv[1];
   // Scalar num(a);
   af=atof(argv[1]);
   // a=std::atof(argv[1])  static_cast<double>(a);
   if(std::isnan(af) == true ) 
   {
std::cout<<"invalido";
   }
   else
   std::cout<<"valido";
    //std::cout<<std::setprecision(50)<<af<<std::endl;*/
   
}
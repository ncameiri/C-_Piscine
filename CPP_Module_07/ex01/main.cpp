#include "iter.hpp"

void all_k(char &a){
    a='k';
}

void num_2times(int &a){
    a=a*2;
}

void check_even(int &a){
    if(a%2 == 0)
        std::cout << "even\n";
    else
         std::cout << "odd\n";    
}

void char_array_test(){
    char a[3]={'v','a','o'};
    std::cout<<"char array :          ";
    for(int i=0; i<3 ; i++)
        std::cout<<" elem "<<i<<": "<<a[i];
    ::iter(a,3,all_k);
    std::cout<<"\nchar array after iter:";
    for(int i=0; i<3 ; i++)
        std::cout<<" elem "<<i<<": "<<a[i];


std::cout<<std::endl;

}

int main(){

int b[3]={3,9,10};
std::cout<<"int array :          ";
    for(int i=0; i<3 ; i++)
    std::cout<<" elem "<<i<<": "<<b[i];
std::cout<<std::endl;
::iter(b,3,check_even);
::iter(b,3,num_2times);
std::cout<<"\nint array after iter:";
for(int i=0; i<3 ; i++)
    std::cout<<" elem "<<i<<": "<<b[i];



}
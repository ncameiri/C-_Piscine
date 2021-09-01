#include "easyfind.hpp"

void showlist(std::list <int> g){
  std::list <int> ::iterator it;
   for(it = g.begin(); it != g.end() ; ++it)
        std::cout<< '\t'<< *it;
    std::cout<<std::endl;
}

void displayInt(int i){
    std::cout << '\t' <<i;
}

int main(){

std::list<int> lst1;

//std::map<std::string, IOperation*> map1;

std::vector<int> v1;

std::vector<int> v2(42, 100);


lst1.push_front(3);
lst1.push_front(6);
lst1.push_front(30);
lst1.push_back(-20);
//showlist(lst1);
for_each(lst1.begin(),lst1.end(), displayInt);
std::cout<<std::endl;
std::cout<<"\nElemento do principio (front): "<<lst1.front();
std::cout<<"\nElemento do fim (back): "<<lst1.back();





}
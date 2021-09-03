#include "easyfind.hpp"

template<typename T>
void showlist(T &g){
  typename T::iterator it; 
   for(it = g.begin(); it != g.end() ; ++it)
        std::cout<< '\t'<< *it;
    std::cout<<std::endl;
}
int main(){

std::cout<<"List \n";
std::list<int> lst1;

lst1.push_front(3);
lst1.push_front(6);
lst1.push_front(30);
lst1.push_back(-20);

showlist(lst1);
try 
{
	    easyfind(lst1,3);
} 
catch (std::exception& e)
{
		std::cout <<"Not Found"<< std::endl;
}

std::cout<<"\nDeque \n";
std::deque<int> dq1;

dq1.push_front(3);
dq1.push_front(6);
dq1.push_front(30);
dq1.push_back(-20);

showlist(dq1);
try 
{
	    easyfind(dq1,3);
} 
catch (std::exception& e)
{
		std::cout <<"Not Found"<< std::endl;
}


std::cout<<"\nVector \n";

std::vector<int> vect1;

vect1.push_back(3);
vect1.push_back(6);
vect1.push_back(30);
vect1.push_back(-20);

showlist(vect1);
try 
{
	    easyfind(vect1,6);
} 
catch (std::exception& e)
{
		std::cout <<"Not Found"<< std::endl;
}


std::cout<<"\nArray \n";
std::array<int, 4> arr1;
std::array<int, 4>::iterator it;
//Dont acept push
it = arr1.begin();
*it = 3; it++;
*it = 6; it++;
*it = 30; it++;
*it = -20;

showlist(arr1);
try 
{
	    easyfind(arr1,6);
} 
catch (std::exception& e)
{
		std::cout <<"Not Found"<< std::endl;
}
}
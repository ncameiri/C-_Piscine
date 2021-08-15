#include"Bureaucrat.hpp"
int main(){
    //TEST CONSTRUCTOR + INCREMENT GRADE + TOO HIGH EXCEPT
	try 
	{	
		Bureaucrat a("Thomas",2);
		std::cout << a << std::endl;
		while(1){
			a.incgrade();
			std::cout << a << std::endl;}
	}
	catch (std::exception& err) 
	{
		std::cout << err.what() << std::endl;
	}
	std::cout << std::endl;

   

    return 0;
}
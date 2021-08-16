#include"Bureaucrat.hpp"
int main(){

    //TEST CONSTRUCTOR + INCREMENT GRADE + TOO HIGH EXCEPT
	std::cout << "Constructor ( Thomas , 2) + Increment while(1) activates exception \n";
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

	std::cout << "Constructor ( Alex , 149) + Decrement while(1) activates exception \n";
	try 
	{	
		Bureaucrat a("Alex",149);
		std::cout << a << std::endl;
		while(1){
			a.decgrade();
			std::cout << a << std::endl;}
	}
	catch (std::exception& err) 
	{
		std::cout << err.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Constructor ( John , 153)  activates exception \n";
	try 
	{	
		Bureaucrat a("John",153);
		std::cout << a << std::endl;
		while(1){
			a.decgrade();
			std::cout << a << std::endl;}
	}
	catch (std::exception& err) 
	{
		std::cout << err.what() << std::endl;
	}
	std::cout << std::endl;


   

    return 0;
}
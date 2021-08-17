#include "Bureaucrat.hpp"

int main(void) {

	std::cout << "Without Exception" << std::endl;
	try 
	{
		Bureaucrat a("Nuno", 40);
		Form form("ValidForm", 50, 10);
		std::cout << a << std::endl;
		std::cout << form << std::endl;
		a.signForm(form);
		std::cout << form << std::endl;
	} 
	catch (std::exception& err) 
	{
		std::cout << err.what() << std::endl;
	}
	std::cout << std::endl;


	std::cout << "Not enough Grade " << std::endl;
	try 
	{
		Bureaucrat a("John", 75);
		Form form("Form1", 35, 20);

		std::cout << a << std::endl;
		std::cout << form << std::endl;

		a.signForm(form);

		std::cout << form << std::endl;
		
	}
	catch (std::exception& err)
	{
		std::cout << err.what() << std::endl;
	}
	std::cout << std::endl;

	
	std::cout << "Test Invalid " << std::endl;
	try 
	{
		Form form("Inv Form", -3, 10);

		std::cout << form << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

		std::cout << "Invalid 2 Grades Form " << std::endl;

	try {
		Form form("Inv2gradesForm", 0, 200);

		std::cout << form << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;



}
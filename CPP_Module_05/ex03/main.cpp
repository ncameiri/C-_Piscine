#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main(void) {

	Intern someRandomIntern;
	Form* rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    if(rrf)
	std::cout << rrf->getName()<<std::endl<<std::endl;
	delete rrf;

	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
    if(rrf)
	std::cout << rrf->getName()<<std::endl<<std::endl;
	delete rrf;

	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
    std::cout << rrf->getName()<<std::endl<<std::endl;
	delete rrf;

	rrf = someRandomIntern.makeForm("no exist", "Bender");
	if(rrf)
	std::cout << rrf->getName()<<std::endl<<std::endl;
	delete rrf;

	
}
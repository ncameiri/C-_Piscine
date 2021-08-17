#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(){
	Bureaucrat                    b1("B1", 137);
    Bureaucrat                    b2("B2", 45);
    Bureaucrat                    b3("B3", 5);
    ShrubberyCreationForm         f1("SCF");
    RobotomyRequestForm           f2("RRF");
    PresidentialPardonForm        f3("PPF");

std::cout << "Only Shrubbery Form\n";
  try
    {
        b1.signForm(f1);
        b1.signForm(f2);
        b1.signForm(f3);

        b1.executeForm(f1);
        b1.executeForm(f2);
        b1.executeForm(f3);
    }
    catch (std::exception &err)
    {
        std::cout << err.what() << std::endl;
    }
	std::cout<<"\n\n";
    std::cout << "Robotomy + Shrubbery\n";
    try
    {
        b2.signForm(f1);
        b2.signForm(f2);
        b2.signForm(f3);

        b2.executeForm(f1);
        b2.executeForm(f2);
        b2.executeForm(f3);
    }
    catch (std::exception &err)
    {
        std::cout << err.what() << std::endl;
    }
    std::cout<<"\n\n";
    std::cout << "ALL\n";

    try
    {
        b3.signForm(f1);
        b3.signForm(f2);
        b3.signForm(f3);

        b3.executeForm(f1);
        b3.executeForm(f2);
        b3.executeForm(f3);
    }
    catch (std::exception &err)
    {
        std::cout << err.what() << std::endl;
    }



	}
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>
# include <stdexcept>
#include "Form.hpp"
class Form;
class Bureaucrat
{
private:
   std::string const name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(std::string const& name_in, int grade_in);
    ~Bureaucrat();
    Bureaucrat(Bureaucrat const& to_copy);
    
    Bureaucrat& operator=(Bureaucrat const& to_copy);

    //GETTERS
    std::string const& getName()const;
    int getGrade() const;

    //Increment decrement grade reverse (LOwer increments grade)
    void incgrade();
    void decgrade();
    
    //ex01
    void signForm(Form& form);

    class GradeTooHighException : public std::exception {
				const char* what() const throw ();
	};

	class GradeTooLowException : public std::exception {
				const char* what() const throw ();
	};

    //ex02
    void executeForm(Form const& form);

};

std::ostream& operator<<(std::ostream& outsend, const Bureaucrat& bur);
#endif

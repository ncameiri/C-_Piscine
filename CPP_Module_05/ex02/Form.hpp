#ifndef FORM_HPP
# define FORM_HPP
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
private:
    std::string name;
    bool _signed;
    int sign_grade;
    int exec_grade;
public:
    Form();
    ~Form();
    Form(std::string const& _name, int _sign_grade, int _exec_grade);
	Form(Form const& to_copy);
    Form& operator=(Form const& to_copy);

    //GETTERS
    std::string getName() const;
    bool is_signed() const;
    int getsign_grade() const;
	int getexec_grade() const;

    
    void beSigned(Bureaucrat& signator);

    class GradeTooHighException : public std::exception {
			public:
				const char* what(void) const throw (){
                    return "Grade is too high";
                }
		};

		class GradeTooLowException : public std::exception {
			public:
				const char* what(void) const throw (){
                    return "Grade is too low";
                }
		};
};
std::ostream& operator<<(std::ostream& outsend, const Form& form);

#endif
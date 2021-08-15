#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>
# include <stdexcept>
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
    

    class GradeTooHighException : public std::exception {
				const char* what() const throw ();
	};

	class GradeTooLowException : public std::exception {
				const char* what() const throw ();
	};

};
std::ostream& operator<<(std::ostream& outsend, const Bureaucrat& bur);

#endif

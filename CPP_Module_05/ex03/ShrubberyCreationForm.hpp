#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
private:
    std::string target;
public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(std::string const& _target);
    ShrubberyCreationForm(ShrubberyCreationForm const& to_copy);
    ShrubberyCreationForm& operator=(ShrubberyCreationForm const& to_copy);

    void execute(const Bureaucrat &exec) const;
};



#endif
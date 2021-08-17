#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
#include "Bureaucrat.hpp"
//# include <ctime>
//# include <cstdlib>
//# include <iostream>
class RobotomyRequestForm : public Form
{
private:
    std::string target;
public:
    RobotomyRequestForm();
    ~RobotomyRequestForm();
    RobotomyRequestForm(std::string const& _target);
    RobotomyRequestForm(RobotomyRequestForm const& to_copy);
    RobotomyRequestForm& operator=(RobotomyRequestForm const& to_copy);

    void execute(const Bureaucrat &exec) const;
};



#endif
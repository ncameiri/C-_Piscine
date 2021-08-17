#include "RobotomyRequestForm.hpp"
#include <cstdlib>
RobotomyRequestForm::RobotomyRequestForm():Form("RobotomyRequestForm",
    72,45), target("DefConst")
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const& _target):Form("RobotomyRequestForm",
    72,45), target(_target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& to_copy):Form("RobotomyRequestForm",
    72,45), target(to_copy.target)
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& to_copy){
	target = to_copy.target;
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &exec) const {
{
    Form::execute(exec);
    srand(time(0));
    if (rand() %2 == 0 )
    {
        std::cout << "DRRRRRRRRR " << target \
                  << " has been robotomized successfully "<< std::endl;
    }
    else
    {
        std::cout << "The " << exec.getName() << " robotomization failed "<< std::endl;
    }
    return ;
}
}
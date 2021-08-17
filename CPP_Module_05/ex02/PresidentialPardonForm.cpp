#include "PresidentialPardonForm.hpp"
PresidentialPardonForm::PresidentialPardonForm():Form("PresidentialPardonForm",
    25,5), target("DefConst")
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const& _target):Form("PresidentialPardonForm",
    25,5), target(_target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& to_copy):Form("PresidentialPardonForm",
    25,5), target(to_copy.target)
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& to_copy){
	target = to_copy.target;
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &exec) const {
    Form::execute(exec);
	std::cout << target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
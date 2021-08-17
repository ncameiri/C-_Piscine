#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string target;
public:
    PresidentialPardonForm();
    ~PresidentialPardonForm();
    PresidentialPardonForm(std::string const& _target);
    PresidentialPardonForm(PresidentialPardonForm const& to_copy);
    PresidentialPardonForm& operator=(PresidentialPardonForm const& to_copy);

    virtual void execute(const Bureaucrat &exec) const;
};



#endif
#include "Intern.hpp"

std::string Intern::types[3] = {
    "presidential pardon",
    "robotomy request",
    "shrubbery creation"
};

Intern::Intern()
{
    functions[0] = &Intern::newPresidentialPardonForm;
    functions[1] = &Intern::newRobotomyRequestForm;
    functions[2] = &Intern::newShrubberyCreationForm;
    return ;
}

Intern::Intern(const Intern &src)
{
    *this = src;
    return ;
}

Intern::~Intern()
{
}

Intern &Intern::operator= (const Intern &to_copy)
{
    return (*this);
}




Form *Intern::makeForm(std::string name, std::string target)
{
    try
    {
        return search(name, target);
    }
    catch (std::exception &err)
    {
        std::cout << name << " : form type not found" << std::endl;
        return NULL;
    }
}

Form *Intern::search(std::string name, std::string target)
{
    for (int i = 0; i < 3; i ++)
    {
        if (name == this->types[i])
        {
            std::cout << "Intern Creates "<<name<<"form\n";
            return (this->*functions[i])(target);
        }
    }
    std::cout << "Form not found" << std::endl;
    return NULL;
}

Form *Intern::newPresidentialPardonForm(std::string const& target)
{
    return (new PresidentialPardonForm(target));
}

Form *Intern::newRobotomyRequestForm(std::string const& target)
{
    return (new RobotomyRequestForm(target));
}

Form *Intern::newShrubberyCreationForm(std::string const& target)
{
    return (new ShrubberyCreationForm(target));
}
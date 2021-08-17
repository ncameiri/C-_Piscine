#ifndef INTERN_HPP
# define INTERN_HPP
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
public:

    Intern();
    ~Intern(void);
    Intern(const Intern& to_copy);
    Intern  &operator= (const Intern& to_copy);
    Form    *makeForm(std::string name, std::string target);
    Form*                        search(std::string n, std::string t);
    Form*                        newPresidentialPardonForm(std::string const& target);
    Form*                        newRobotomyRequestForm(std::string const& target);
    Form*                        newShrubberyCreationForm(std::string const& target);

    //Cria Pointer para a função que vai gerar respectivo Form
    //o Id do Typo Corresponde ao Id da função correspondente
    typedef Form* (Intern::*InternTypesAllowed)(std::string const&);
private:

    InternTypesAllowed functions[3];
    static std::string types[3];
};

#endif
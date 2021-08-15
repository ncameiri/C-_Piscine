#ifndef FORM_HPP
# define FORM_HPP
#include "Bureaucrat.hpp"
class Form
{
private:
    std::string name;
    bool _signed;
public:
    Form(/* args */);
    ~Form();

    //GETTERS
    std::string getName();
    bool is_signed();

    void beSigned(Bureaucrat);
};
std::ostream& operator<<(std::ostream& outsend, const Form& form);

#endif
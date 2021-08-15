#include "Form.hpp"
Form::Form()
{
}

Form::~Form()
{
}
std::string Form::getName(){
    return name;
}

bool Form::is_signed(){
    return _signed;
}
std::ostream& operator<<(std::ostream& outsend, const Form& form){
    outsend <<"signs";
    return outsend;
}
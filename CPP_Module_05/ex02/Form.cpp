#include "Form.hpp"
Form::Form(): name("Default,"), _signed(false), sign_grade(75), exec_grade(30)
{
}

Form::~Form()
{
}
Form::Form(std::string const& _name, int _sign_grade, int _exec_grade)
	: name(_name),sign_grade(_sign_grade),exec_grade(_exec_grade),_signed(false) {
    if(sign_grade > 150 | exec_grade > 150)
        throw  GradeTooLowException();
    if(sign_grade < 1 | exec_grade < 1)
        throw GradeTooHighException();
}

Form::Form(Form const& to_copy)
	: name(to_copy.name),sign_grade(to_copy.sign_grade),exec_grade(to_copy.exec_grade), _signed(to_copy._signed) 
{
}


Form& Form::operator=(Form const& to_copy) {
	_signed = to_copy._signed;
	return *this;
}
std::string Form::getName() const{
    return name;
}

bool Form::is_signed() const{
    return _signed;
}

int Form::getsign_grade() const{
    return sign_grade;
}

int Form::getexec_grade() const{
    return exec_grade;
}

void Form::beSigned(Bureaucrat& signator) {
	if (signator.getGrade() > sign_grade) 
		throw GradeTooLowException();
    else 
		_signed = true;
}

std::ostream& operator<<(std::ostream& outsend, const Form& form){
    if(form.is_signed())
        outsend <<form.getName()<<" is signed grade to execute : "<<form.getexec_grade()
        <<", grade to sign :"<<form.getsign_grade();
    else
        outsend <<form.getName()<<" is not signed grade to execute : "<<form.getexec_grade()
        <<", grade to sign :"<<form.getsign_grade();
    return outsend;
}
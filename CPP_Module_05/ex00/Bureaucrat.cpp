#include "Bureaucrat.hpp"
Bureaucrat::Bureaucrat(): name("Default"), grade(75)
{
}

Bureaucrat::Bureaucrat(std::string const& name_in, int grade_in) : name(name_in) {
	grade = grade_in;
	if(grade > 150)
		throw GradeTooLowException();
	if(grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(Bureaucrat const& to_copy) {
	*this = to_copy;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& to_copy) {
	grade = to_copy.grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

std::string const& Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
	return grade;
}

void Bureaucrat::incgrade(void) {
	grade--;
	if(grade < 1)
		throw GradeTooHighException();
}
void Bureaucrat::decgrade(void) {
	grade++;
	if(grade > 150)
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& outsend, const Bureaucrat& bur){
    outsend << bur.getName() << ", bureaucrat grade " << bur.getGrade();
    return outsend;
}

const char* Bureaucrat::GradeTooHighException::what() const throw () {
	return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw () {
	return "Grade is too low";
}

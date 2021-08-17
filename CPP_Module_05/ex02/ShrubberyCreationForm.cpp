
#include "ShrubberyCreationForm.hpp"
#include <fstream>
ShrubberyCreationForm::ShrubberyCreationForm():Form("ShrubberyCreationForm",
    145,137), target("DefConst")
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& _target):Form("ShrubberyCreationForm",
    145,137), target(_target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& to_copy):Form("ShrubberyCreationForm",
    145,137), target(to_copy.target)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& to_copy){
	target = to_copy.target;
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &exec) const {
    Form::execute(exec);
    std::string _fileout = exec.getName() + "_shrubbery";
    std::ofstream ofs(_fileout);
    

ofs<<"        ___       \n"
<<"     __/   \\__      \n"
<<"  __/   / \\   \\__     \n"
<<" /   .      .    \\     \n"
<<"|         .    .  |  \n"
<<" \\__          . __/\n"
<<"    \\__\\^^^^/__/\n"
<<"       ......             \n"
<<"       ......             \n" 
<<"       ......             \n"
<<"       ......             \n"
<<"       ......             \n"
<<" ______......_______  \n"
<<"___\\/______\\/________\n";
}
#include "phonebook.hpp"

phonebook::phonebook(){  
	this->index=-1; 
    return; 
}

phonebook::~phonebook(){
    return;
}

void phonebook::show_contact(){

    	std::cout << "index: " << this->index<< std::endl;
		std::cout << "first name: " << this->first_name<< std::endl;
		std::cout << "last name: " << this->last_name<< std::endl;
		std::cout << "nickname: " << this->nickname<< std::endl;
		std::cout << "login: " << this->login<< std::endl;
		std::cout << "postal_address: " << this->postal_address<< std::endl;
		std::cout << "email address: " << this->email_address<< std::endl;
		std::cout << "phone number: " << this->phone_number<< std::endl;
		std::cout << "birthday date: " << this->birthday_date<< std::endl;
		std::cout << "favorite meal: " << this->favorite_meal<< std::endl;
		std::cout << "underwear color: " << this->underwear_color<< std::endl;
		std::cout << "darkest secret: " << this->darkest_secret<< std::endl;
}
void phonebook::search_show(){
	
	std::cout << "|" <<"         "<< this->index<< "|";

	if (this->first_name.length() <=10)
		std::cout <<std::setw(10) <<this->first_name<<"|";
	else
		std::cout <<this->first_name.substr(0,9)<<".|";


	if (this->last_name.length() <=10)
		std::cout <<std::setw(10) <<this->last_name<<"|";
	else
		std::cout <<this->last_name.substr(0,9)<<".|";

	
	if (this->nickname.length() <=10)
		std::cout <<std::setw(10) <<this->nickname<<"|";
	else
		std::cout <<this->nickname.substr(0,9)<<".|";
}

void phonebook::new_contact(int index) {
	
	this->index = index;
	fflush(stdin);
    std::cin.clear();

	std::cout << "first name: ";
	std::getline(std::cin,this->first_name);

	std::cout << "last name: ";
	std::getline(std::cin,this->last_name);

	std::cout << "nickname: ";
	std::getline(std::cin,this->nickname);

	std::cout << "login: ";
	std::getline(std::cin,this->login);

	std::cout << "postal address: ";
	std::getline(std::cin,this->postal_address);

	std::cout << "email address: ";
	std::getline(std::cin,this->email_address);

	std::cout << "phone number: ";
	std::getline(std::cin,this->postal_address);

	std::cout << "birthday date: ";
	std::getline(std::cin,this->birthday_date);

	std::cout << "favorite meal: ";
	std::getline(std::cin,this->favorite_meal);

	std::cout << "underwear color: ";
	std::getline(std::cin,this->underwear_color);

	std::cout << "darkest secret: ";
	std::getline(std::cin,this->darkest_secret);
	
	return;
}

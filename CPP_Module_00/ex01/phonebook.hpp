#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>
#include<limits> 
#include <ios>
class phonebook
{
	private:

    int index;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;

    public:
	
    phonebook();
    ~phonebook();
    void new_contact(int index);
    void show_contact();
	void search_show();
};

#endif 

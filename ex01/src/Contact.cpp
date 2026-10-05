#include "Contact.hpp"
#include <iostream>
#include <string>

std::string input_contact(std::string message)
{
	std::string info;

	while (info.empty())
	{
		std::cout << message << " : ";
		std::getline(std::cin, info);
		std::cout << std::endl;
	}
	return (info);
}

// getter
std::string	Contact::get_first_name(void){return (_first_name);}
std::string	Contact::get_last_name(void){return (_last_name);}
std::string	Contact::get_nickname(void){return (_nickname);}
std::string	Contact::get_phone_number(void){return (_phone_number);}
std::string	Contact::get_darkest_secret(void){return (_darkest_secret);}

// setter
void	Contact::set_first_name(std::string arg){_first_name = arg;}
void	Contact::set_last_name(std::string arg){_last_name = arg;}
void	Contact::set_nickname(std::string arg){_nickname = arg;}
void	Contact::set_phone_number(std::string arg){_phone_number = arg;}
void	Contact::set_darkest_secret(std::string arg){_darkest_secret = arg;}
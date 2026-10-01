#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>

int		PhoneBook::get_index()
{
	return (_index);
}

void	PhoneBook::set_index(int value)
{
	_index = value;
}

void	display_line(int white_length, std::string first_name, std::string last_name, std::string nickname)
{

}

void	PhoneBook::add_contact()
{
	_contacts[_index % 8].set_first_name(input_contact("First Name"));
	_contacts[_index % 8].set_last_name(input_contact("Last Name"));
	_contacts[_index % 8].set_nickname(input_contact("Nickname"));
	_contacts[_index % 8].set_phone_number(input_contact("Phone Number"));
	_contacts[_index % 8].set_darkest_secret(input_contact("Darkest Secret"));
	_index++;
	std::cout << "New contact added to the PhoneBook database" << std::endl;
}

void	PhoneBook::search_contact()
{
	std::cout << "|" << std::endl;
	for (int i = 0; i < std::min(_index, 8); i++)
	{
		display_line(10, _contacts[i].get_first_name, _contacts[i].get_last_name, contacts[i].get_nickname);
	}
}

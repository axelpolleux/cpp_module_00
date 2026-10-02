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

void	init_line(int white_length)
{
	std::cout << "|";
	std::cout << std::right << std::setw(white_length) << "Index";
	std::cout << "|";
	std::cout << std::right << std::setw(white_length) << "First Name";
	std::cout << "|";
	std::cout << std::right << std::setw(white_length) << "Last Name";
	std::cout << "|";
	std::cout << std::right << std::setw(white_length) << "Nickname";
	std::cout << "|";
	std::cout << std::endl;
}

std::string border_line(int max_width, std::string argument)
{
	std::string	res;

	res = argument;
	if (argument.length() > (size_t)max_width)
	{
		res = res.substr(0, max_width - 1);
		res += '.';
	}
	return res;
}

void	display_line(int white_length, int index, std::string first_name, std::string last_name, std::string nickname)
{
	std::cout << "|";
	std::cout << std::right << std::setw(white_length) << index;
	std::cout << "|";
	std::cout << std::right << std::setw(white_length) << border_line(white_length, first_name);
	std::cout << "|";
	std::cout << std::right << std::setw(white_length) << border_line(white_length, last_name);
	std::cout << "|";
	std::cout << std::right << std::setw(white_length) << border_line(white_length, nickname);
	std::cout << "|";
	std::cout << std::endl;
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
	init_line(10);
	for (int i = 0; i < std::min(_index, 8); i++)
	{
		display_line(10, i, _contacts[i].get_first_name(), _contacts[i].get_last_name(), _contacts[i].get_nickname());
	}
}

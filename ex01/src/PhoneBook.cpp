#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cctype>

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

void	display_full_contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	std::cout << "First name : " << first_name << std::endl;
	std::cout << "Last name : " << last_name << std::endl;
	std::cout << "Nickname : " << nickname << std::endl;
	std::cout << "Phone number : " << phone_number << std::endl;
	std::cout << "Darkest Secret : " << darkest_secret << std::endl;
}

void	PhoneBook::add_contact()
{
	std::string		first_name = input_contact("First Name");
	std::string		last_name = input_contact("Last Name");
	std::string		nickname = input_contact("Nickname");
	std::string		phone_number = input_contact("Phone Number");
	std::string		darkest_secret = input_contact("Darkest Secret");

	if (!std::cin)
	{
		std::cin.clear();
		return ;
	}
	_contacts[_index % 8].set_first_name(first_name);
	_contacts[_index % 8].set_last_name(last_name);
	_contacts[_index % 8].set_nickname(nickname);
	_contacts[_index % 8].set_phone_number(phone_number);
	_contacts[_index % 8].set_darkest_secret(darkest_secret);
	_index++;
	std::cout << "New contact added to the PhoneBook database" << std::endl;
}

bool	check_arg(std::string index_contact, int &res, int index)
{
	if (index_contact.empty())
	{
		std::cout << "Empty arguments are forbidden" << std::endl;
		return false;
	}
	for (int i = 0; index_contact[i]; i++)
	{
		if (!std::isdigit(index_contact[i]))
		{
			std::cout << "Only numbers are accepted" << std::endl;
			return false;
		}
	}
	res = std::atoi(index_contact.c_str());
	if (res >= std::min(index, 8))
	{
		std::cout << "Not found contact" << std::endl;
		return false;
	}
	return true;
}

void	PhoneBook::search_contact()
{
	int				index = 0;
	std::string		index_contact;

	init_line(10);
	for (int i = 0; i < std::min(_index, 8); i++)
	{
		display_line(10, i, _contacts[i].get_first_name(), _contacts[i].get_last_name(), _contacts[i].get_nickname());
	}
	while (std::cin)
	{
		std::cout << "Index : ";
		if (!std::getline(std::cin, index_contact))
		{
			std::cin.clear();
			std::cout << std::endl;
			return ;
		}
		std::cout << std::endl;
		bool	valid = check_arg(index_contact, index, _index);

		if (!valid)
			continue ;

		display_full_contact(_contacts[index].get_first_name(), _contacts[index].get_last_name(), _contacts[index].get_nickname(), _contacts[index].get_phone_number(), _contacts[index].get_darkest_secret());
		return ;
	}
}
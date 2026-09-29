#include <string>
#include <iostream>

#include "Contact.hpp"
#include "../includes/Contact.hpp"

std::string	input_contact(std::string message)
{
	std::string	info;

	while (info.length() <= 0)
	{
		std::cout << message << " : ";
		std::getline(std::cin, info);
		std::cout << std::endl;
	}
	return (info);
}

int	AddFunction()
{
	Contact newContact;

	std::set(Contact._first_name) = input_contact("First name");
	std::set(Contact._last_name) = input_contact("Last name");
	std::set(Contact._nickname) = input_contact("nickname");
	std::set(Contact._phone_number) = input_contact("Phone number");
	std::set(Contact._darkest_secret) = input_contact("Darkest secret");

	return 0;
}

int	SearchFunction()
{
	std::cout << "Search a new contact";
	std::cout << std::endl;
	return 0;
}

int	ExitFunction()
{
	std::cout << "Exit a new contact";
	std::cout << std::endl;
	return 0;
}

int	main()
{
	int			running;
	std::string	cmd;

	running = 1;
	while (running)
	{
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			AddFunction();
		else if (cmd == "SEARCH")
			SearchFunction();
		else if (cmd == "EXIT")
			running = 0;
		else if (std::cin.eof())
			running = 0;
	}
	return 0;
}

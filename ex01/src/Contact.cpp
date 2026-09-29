#include "Contact.hpp"
#include <iostream>
#include <string>

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

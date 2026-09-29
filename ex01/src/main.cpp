#include <string>
#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	int			running;
	PhoneBook	MyPhoneBook;
	std::string	cmd;

	running = 1;
	while (running)
	{
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			MyPhoneBook.add_contact();
		// else if (cmd == "SEARCH")
		// 	search_contact();
		else if (cmd == "EXIT")
			running = 0;
		else if (std::cin.eof())
			running = 0;
	}
	return 0;
}

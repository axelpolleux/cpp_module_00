#include <string>
#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	MyPhoneBook;
	std::string	cmd;

	MyPhoneBook.set_index(0);
	while (std::cin)
	{
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			MyPhoneBook.add_contact();
		else if (cmd == "SEARCH")
			MyPhoneBook.search_contact();
		else if (cmd == "EXIT")
			break ;
	}
	return 0;
}

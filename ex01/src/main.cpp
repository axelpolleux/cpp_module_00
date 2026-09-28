#include <string>

#include "Contact.hpp"

int	AddFunction()
{
	std::cout << "Add a new contact";
	return 0;
}

int	SearchFunction()
{
	std::cout << "Search a new contact";
	return 0;

}

int	ExitFunction()
{
	std::cout << "Exit a new contact";
	return 0;
}

int	main()
{
	std::string	cmd;
	while (true)
	{
		std::cin >> cmd;
		if (cmd == "ADD")
			AddFunction();
		else if (cmd == "SEARCH")
			SearchFunction();
		else if (cmd == "EXIT")
			ExitFunction();
		std::cout << std::endl;
	}
	return 0;
}

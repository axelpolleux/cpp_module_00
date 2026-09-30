#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

void	PhoneBook::add_contact()
{
	(void)_index;
	Contact newContact;

	newContact.set_first_name("Benoit");
	std::cout << newContact.get_first_name();
}

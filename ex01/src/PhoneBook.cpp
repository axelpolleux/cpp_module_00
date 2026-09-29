#include "PhoneBook.hpp"
#include "Contact.hpp"


void	PhoneBook::add_contact()
{
	// int	i = this->_index;
	int	i = 0;
	this->_contacts[i % 8]._first_name = input_contact("First Name");
	this->_contacts[i % 8]._last_name = input_contact("Last Name");
	this->_contacts[i % 8]._nickname = input_contact("Nickname");
	this->_contacts[i % 8]._phone_number = input_contact("Phone_number");
	this->_contacts[i % 8]._darkest_secret = input_contact("Darkest Secret");
}

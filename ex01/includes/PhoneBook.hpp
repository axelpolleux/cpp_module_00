#pragma once
#include "Contact.hpp"

class PhoneBook
{
private:
	int		_index;
	Contact	_contacts[8];
public:
	void	add_contact();
};
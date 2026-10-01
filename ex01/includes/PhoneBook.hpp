#pragma once
#include "Contact.hpp"

class PhoneBook
{
private:
	int		_index;
	Contact	_contacts[8];
public:
	int		get_index();
	void	set_index(int value);

	void	add_contact();
	void	search_contact();
};
#pragma once
#include <string>

class Contact
{

private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
public:
	void		init_contact(void);
};

std::string	input_contact(std::string message);
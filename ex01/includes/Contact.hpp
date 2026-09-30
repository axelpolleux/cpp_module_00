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

	// getter
	std::string	get_first_name(void);
	std::string	get_last_name(void);
	std::string	get_nickname(void);
	std::string	get_phone_number(void);
	std::string	get_darkest_secret(void);

	// setter
	void	set_first_name(std::string arg);
	void	set_last_name(std::string arg);
	void	set_nickname(std::string arg);
	void	set_phone_number(std::string arg);
	void	set_darkest_secret(std::string arg);
};

std::string	input_contact(std::string message);
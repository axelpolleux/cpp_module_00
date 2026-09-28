#include <cctype>
#include <iostream>

int	main(int ac, char **av)
{
	// init string result
	std::string	res = "";

	// Handle empty params
	if (ac <= 1)
		res = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1 ; i < ac ; i++)
	{
		for (int j = 0; av[i][j]; j++)
		{
			res += toupper(av[i][j]);
		}
	}


	std::cout << res << std::endl;
	return 0;
}
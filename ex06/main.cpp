#include "Harl.hpp"

int main(int ac, char **av)
{
	
	if (ac != 2)
	{
		std::cout << "You have add only one arguments [DEBUG, INFO, WARNING or ERROR]" << std::endl;
		return 1;
	}
	Harl harl;
	harl.complain(av[1]);
	return 0;
}
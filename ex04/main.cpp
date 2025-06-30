#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "You have only three arguments" << std::endl;
		return (1);
	}
	std::string fileName = av[1];
	std::ifstream file(fileName);
	if (!file)
	{
		std::cout << "Error to open this file: " << fileName <<  std::endl;
		return (1);
	}
	std::ofstream fileReplace(fileName + ".replace");
	if (!fileReplace)
	{
		std::cout << "Error to open this file: " << fileName + ".replace" <<  std::endl;
		file.close();
		return (1);
	}
	std::string line;
	while(std::getline(file, line))
	{
		if (line == av[2])
			fileReplace << av[3] << std::endl;
		else
			fileReplace << line << std::endl;
	}
	file.close();
	fileReplace.close();
	return 0;
}
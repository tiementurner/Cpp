#include <iostream>
#include "PriceConverter.hpp"

//https://github.com/PunkChameleon/ford-johnson-merge-insertion-sort

int main(int ac, char** av)
{
	if (ac != 2)
	{
		std::cout << "Error: not enough arguments(1 needed).";
		return (0);
	}
	PriceConverter btc(av[1]);
	if (!btc.is_open)
		return (0);

	btc.process();

	// std::string line;

	// while (std::getline(file, line))
	// {
	// 	std::cout << line << std::endl;
	// }
	return(1);
}
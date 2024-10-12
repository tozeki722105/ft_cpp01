#include "Harl.hpp"

int main()
{
	Harl harl;
	std::string input;

	std::cout << "Enter level : ";
	while ((std::getline(std::cin, input)))
	{
		harl.complain(input);
		std::cout << "Enter level : ";
	}
}
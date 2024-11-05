#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "DEBUG DEBUG DEBUG DEBUG DEBUG" << std::endl;
}

void Harl::info(void)
{
	std::cout << "INFO INFO INFO INFO INFO" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "WARNING WARNING WARNING WARNING WARNING" << std::endl;
}

void Harl::error(void)
{
	std::cout << "ERROR ERROR ERROR ERROR ERROR" << std::endl;
}

void Harl::complain(std::string level)
{
	std::string   levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	MemberFuncPtr funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (size_t i = 0; i < this->level_count; i++) {
		if (level == levels[i]) {
			(this->*funcs[i])();
			return;
		}
	}
	std::cerr << "InValid level" << std::endl;
}
#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "DEBUG" << std::endl;
}

void Harl::info(void)
{
	std::cout << "INFO" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "WARNING" << std::endl;
}

void Harl::error(void)
{
	std::cout << "ERROR" << std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	MemberFuncPtr funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	for (size_t i = 0; i < this->level_count; i++){
		if (level == levels[i]){
			(this->*funcs[i])();
			return ;
		}
	}
	std::cerr << "InValid level" << std::endl;
}
#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
public:
	void complain(std::string level);

private:
	static const size_t level_count = 4;
	void                debug(void);
	void                info(void);
	void                warning(void);
	void                error(void);
};

typedef void (Harl::*MemberFuncPtr)(void);

#endif
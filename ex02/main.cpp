#include "iostream"
#include "string"

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << std::hex << &str << std::endl 
		<< stringPTR << std::endl 
		<< &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << str << std::endl 
		<< *stringPTR << std::endl 
		<< stringREF << std::endl;
}
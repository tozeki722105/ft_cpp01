#include <fstream>
#include <iostream>
#include <string>

std::string convert(std::string &content, const std::string &old_str, const std::string &new_str)
{
	size_t i = 0;
	size_t pos = content.find(old_str, i);
	while (pos != std::string::npos) {
		content.erase(pos, old_str.length());
		content.insert(pos, new_str);
		i = pos + new_str.length();
		pos = content.find(old_str, i);
	}
	return content;
}

int main(int argc, char **argv)
{
	if (argc != 4){
		std::cerr << "Invalid argments" << std::endl;
		return 1;
	}
		
	std::ifstream ifs(argv[1]);
	std::ofstream ofs((std::string(argv[1]) + ".replace").c_str());
	if (!ifs || !ofs) {
		std::cerr << "Error opening file." << std::endl;
		return 1;
	}
	std::string buffer;
	if (!std::getline(ifs, buffer, '\0'))
		return 1;
	// std::cout << "before" << std::endl << buffer << std::endl;
	convert(buffer, argv[2], argv[3]);
	// std::cout << "after" << std::endl<< buffer << std::endl;
	ofs << buffer;
}

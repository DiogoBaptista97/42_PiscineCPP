#include <filesystem>
#include <fstream>
#include <iostream>

std::string	_replace(std::string _Find, std::string _Replace, std::string line)
{
	size_t n;

	n = 0;
	while(n != std::string::npos)
	{
		n = line.find(_Find);
		if (n == std::string::npos)
			break ;
 		line.erase(n, _Find.length());
		line.insert(n, _Replace);
		n += _Replace.length();
	}
	return (line);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Not valid input" << std::endl;	
		return (1);
	}
	std::fstream myfile(argv[1]);
	std::string _Find = argv[2];
	std::string _Replace = argv[3];
	std::string line;

//	myfile.open();
	if (myfile.is_open())
	{
		std::cout << "in\n";
    	while (getline(myfile, line) )
    	{
			std::cout << "Before ";
			std::cout << line <<std::endl;
			line = _replace(_Find, _Replace, line);
			std::cout << "After ";
			std::cout << line <<std::endl;
    	}
    	myfile.close();
  	}
	return 0;
}
#include <string>
#include <iostream>
#include "../header/Bureaucrat.hpp"

int main(void)
{
	try 
	{
		Bureaucrat bur("Diogo", 2);
		std::cout << bur << std::endl;
		bur.incrementGrade();
		std::cout << bur << std::endl;
/* 		bur.incrementGrade();
		std::cout << bur << std::endl; */
	}
 	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "hi" << std::endl;
	try 
	{
		Bureaucrat bur("Diogo", 160);
	}
 	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}
#include "../header/Base.hpp"
#include "../header/A.hpp"
#include "../header/B.hpp"
#include "../header/C.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <exception>

Base::~Base()
{

}

Base *generate(void)
{
	int option;
	option = rand() % 3;
//	std::cout << "i " << option << std::endl;
	if (option == 0)
		return (new A);
	else if (option == 1)
		return (new B);
	else if (option == 2)
		return (new C);
	else
		return (NULL);
}

void identify(Base *p)
{
	if (!p)
		std::cout << "Void" << std::endl;
	else if(dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if(dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if(dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Don't know!" << std::endl;
}

void identify(Base &p)
{
	try {
		A &first = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)first;
	} catch (const std::exception&){}

	try{
		B &second = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void)second;
	} catch (const std::exception &e){}

	try {
		C &third = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void)third;
	} catch (const std::exception &e){}
}

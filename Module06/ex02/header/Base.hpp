#ifndef BASE_HPP
#define BASE_HPP

#include <string>
#include <iostream>
#include <stdint.h>

class Base
{

	public:
		virtual ~Base();
};
		//they are non-static, so i cant use the last exercise trick to call the functions
		Base *generate(void);
		void identify(Base *p);
		void identify(Base &p);

#endif // BASE_HPP
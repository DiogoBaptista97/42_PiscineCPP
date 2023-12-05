#include <string>
#include <iostream>
#include "../header/Serializer.hpp"
#include "../header/Data.hpp"

int main()
{
	Data n;
	n.information = 42;
	std::cout << "value of info, inside of data: " << n.information << std::endl;
	uintptr_t ptr;

	ptr = Serializer::serialize(&n);
	std::cout << "value of serialization of n: " << ptr << std::endl;

	Data *y;

	y = Serializer::deserialize(ptr);
	std::cout << "value of deserialization of n to y: " << y << std::endl;
	std::cout << "value of address n: " << &n << std::endl;
}
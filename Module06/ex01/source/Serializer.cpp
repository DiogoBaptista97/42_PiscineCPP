#include "../header/Serializer.hpp"
#include "../header/Data.hpp"

#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdint.h>

Serializer::Serializer()
{
}

Serializer& Serializer::operator=(const Serializer &copy)
{
	(void)copy;
	return (*this);
}

Serializer::Serializer(const Serializer &copy)
{
	if (this != &copy)
		*this = copy;
}

Serializer::~Serializer()
{

}

uintptr_t Serializer::serialize(Data* ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

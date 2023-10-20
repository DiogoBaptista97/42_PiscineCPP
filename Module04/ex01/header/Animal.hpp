#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>
class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &copy);
        virtual ~Animal();
		void makeSound() const;
		std::string getType() const;
		Animal& operator=(const Animal &copy);
};

#endif// ANIMAL_HPP
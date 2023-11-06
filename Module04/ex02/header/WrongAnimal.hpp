#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include <string>
class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
        virtual ~WrongAnimal();
		void makeSound() const;
		std::string getType() const;
		WrongAnimal& operator=(const WrongAnimal &copy);
};

#endif// WRONGANIMAL_HPP
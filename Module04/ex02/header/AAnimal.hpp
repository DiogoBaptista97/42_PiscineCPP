#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include <iostream>
#include <string>
class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal &copy);
    	virtual ~AAnimal();
		virtual void makeSound() const = 0;
		std::string getType() const;
		AAnimal& operator=(const AAnimal &copy);
};

#endif// AANIMAL_HPP
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat &copy);
		virtual void makeSound() const;
		WrongCat& operator=(const WrongCat &copy);
};
#endif //WRONGCAT_HPP
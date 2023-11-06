#include "../header/Animal.hpp"
#include "../header/Cat.hpp"
#include "../header/Dog.hpp"
#include "../header/WrongCat.hpp"
#include <iostream>

int main()
{
	int	num_of_animals;
	num_of_animals = 100;
	int i;

	Animal *animals[num_of_animals];
	for(i = 0; i < num_of_animals; i++)
	{
		if (i < num_of_animals / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for(i = 0; i < num_of_animals; i++)
		delete animals[i];

/* 
	Dog basic;
	{
		Dog tmp = basic;
		Brain *tmpptr = tmp.getBrain();
		std::cout << "tmp " << tmpptr << std::endl;
	}
	Brain *basicptr = basic.getBrain();
	std::cout << "basic " << basicptr << std::endl;
*/
}

/* int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;
	return 0;
} */

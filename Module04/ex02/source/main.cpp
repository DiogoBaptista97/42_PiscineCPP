#include "../header/AAnimal.hpp"
#include "../header/Brain.hpp"
#include "../header/Cat.hpp"
#include "../header/Dog.hpp"
#include <iostream>

int main()
{
	int	num_of_animals;
	num_of_animals = 100;
	int i;

	AAnimal *animals[num_of_animals];
	for(i = 0; i < num_of_animals; i++)
	{
		if (i < num_of_animals / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for(i = 0; i < num_of_animals; i++)
		delete animals[i];
    //const AAnimal* meta = new AAnimal();  will not work because makesound is pure method


}
/* 
int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	delete j;//should not create a leak
	delete i;
	return 0;
} */
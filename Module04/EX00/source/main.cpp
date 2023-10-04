#include "../header/Animal.hpp"
#include "../header/Cat.hpp"
#include "../header/Dog.hpp"
#include <iostream>

/* int main()
{
    Animal animal;
	Cat cat;
	Dog dog;

	dog.makeSound();
	cat.makeSound();
} */

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound(); //will output the cat sound!
	meta->makeSound();
	return 0;
}
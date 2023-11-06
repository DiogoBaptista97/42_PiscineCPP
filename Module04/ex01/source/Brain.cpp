#include "../header/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructer" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
}

Brain::~Brain()
{
	std::cout << "Brain Deconstructer" << std::endl;
}

Brain& Brain::operator=(const Brain &copy)
{
	int i;
	for(i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	return (*this);
}


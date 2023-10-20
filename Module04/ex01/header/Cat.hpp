#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
	private:
		Brain* brain;
	public:
		Cat();
		Cat(const Cat &copy);
		~Cat();
		void makeSound(void) const;
		Cat& operator=(const Cat &copy);
};
#endif //CAT_HPP
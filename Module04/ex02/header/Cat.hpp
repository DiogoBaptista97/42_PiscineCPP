#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
class Cat : public AAnimal
{
	private:
		Brain* brain;
	public:
		Cat();
		Cat(const Cat &copy);
		virtual~Cat();
		virtual void makeSound() const;
		Cat& operator=(const Cat &copy);
};
#endif //CAT_HPP
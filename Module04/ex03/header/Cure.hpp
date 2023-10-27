#ifndef CURE_HPP
#define CURE_HPP

#include "./AMateria.hpp"

class Cure : public AMateria
{
	public: 
		Cure();
		~Cure();
		Cure(const Cure &src);
		Cure& operator=(const Cure &src);
		void use(ICharacter &target);
		AMateria* clone() const;
};

#endif // CURE_HPP
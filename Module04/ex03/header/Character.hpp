#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>
#include "./AMateria.hpp"
#include "./ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria *inv[4];
	public:
		Character();
		Character(std::string const name);
		~Character();
		Character(const Character &src);
		Character& operator =(const Character &src);
		//~ICharacter();
		std::string const &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};




#endif //CHARACTER_HPP
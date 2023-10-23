#ifndef MATERIALSOURCE_HPP
#define MATERIALSOURCE_HPP

#include "./IMateriaSource.hpp"
#include "./AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private :
		AMateria *slot[4];
	public :
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource &src);
		MateriaSource& operator =(const MateriaSource &src);
		void learnMateria(AMateria* src);
		AMateria *createMateria(std::string const &type);
};

#endif //MATERIALSOURCE_HPP
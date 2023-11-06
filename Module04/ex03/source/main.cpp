#include "../header/IMateriaSource.hpp"
#include "../header/MateriaSource.hpp"
#include "../header/AMateria.hpp"
#include "../header/ICharacter.hpp"
#include "../header/Ice.hpp"
#include "../header/Cure.hpp"
#include "../header/Character.hpp"

#include <iostream>
#include <string>

int main()
{
<<<<<<< HEAD
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;

    return 0;
}
=======
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	std::cout << "tmp type: " << tmp->getType() << std::endl;
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}
>>>>>>> e707f627fbacbbcae93591e9cc3c6dfc98d16d87

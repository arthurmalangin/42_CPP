#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	AMateria* tmp_trash[2];
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp_trash[0] = tmp;
	tmp = src->createMateria("cure");
	tmp_trash[1] = tmp;
	me->equip(tmp);
	me->unequip(0);
	me->unequip(1);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	delete tmp_trash[0];
	delete tmp_trash[1];
	return 0;
}
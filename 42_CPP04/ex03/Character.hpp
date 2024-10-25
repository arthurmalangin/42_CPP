#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
	public:
		Character(void);
		Character(std::string name);
		Character(const Character &obj);
		~Character(void);

		Character	&operator=(const Character &obj);

		virtual std::string const	&getName() const;
		AMateria					*getInv(int i) const;

		virtual void	equip(AMateria *m);
		virtual void	unequip(int idx);
		virtual void	use(int idx, ICharacter &target);

	private:
		AMateria	*_inventory[4];
		std::string	_name;
};

#endif
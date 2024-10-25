#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
	public:
		AMateria(void);
		AMateria(std::string type);
		AMateria(const AMateria &obj);
		virtual ~AMateria(void);

		AMateria	&operator=(const AMateria &obj);

		std::string const	&getType(void) const;
		void				setType(std::string type);

		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);
	protected:
		std::string _type;
};

#endif
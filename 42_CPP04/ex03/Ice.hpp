#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice(void);
		Ice(const Ice &obj);
		~Ice(void);

		Ice	&operator=(const Ice &obj);

		virtual Ice		*clone(void) const;
		virtual void	use(ICharacter &target);
};

#endif
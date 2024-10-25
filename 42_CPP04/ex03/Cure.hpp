#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure(void);
		Cure(const Cure &obj);
		~Cure(void);

		Cure  &operator=(const Cure &obj);

		virtual Cure	*clone() const;
		virtual void	use(ICharacter &target);
};

#endif
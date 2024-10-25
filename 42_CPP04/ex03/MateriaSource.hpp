#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class   MateriaSource : public IMateriaSource {
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &obj);
		~MateriaSource(void);

		MateriaSource	&operator=(const MateriaSource &obj);

		virtual void		learnMateria(AMateria *);
		virtual AMateria	*createMateria(std::string const &type);

		AMateria	*getSrc(int i) const;

	private:
		AMateria	*_src[4];
};

#endif
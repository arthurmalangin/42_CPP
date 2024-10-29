#include "MateriaSource.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		this->_src[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &obj) {
    for (int i = 0; i < 4; i++) {
        if (obj._src[i])
            this->_src[i] = obj._src[i]->clone();
        else
            this->_src[i] = NULL;
    }
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (this->_src[i])
			delete this->_src[i];
	}
}

AMateria	*MateriaSource::getSrc(int i) const {
	return (this->_src[i]);
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj) {
    if (this != &obj) {
        for (int i = 0; i < 4; i++) {
            if (this->_src[i]) {
                delete this->_src[i];
                this->_src[i] = NULL;
            }
        }
        for (int i = 0; i < 4; i++) {
            if (obj._src[i])
                this->_src[i] = obj._src[i]->clone();
        }
    }
    return *this;
}

void	MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (this->_src[i] == NULL) {
			this->_src[i] = m->clone();
			std::cout << "Materia learned" << std::endl;
			delete m;
			return;
		}
	}
	std::cout << "Not enough space to learn a Materia" << std::endl;
	delete m;
}

AMateria	*MateriaSource::createMateria(std::string const &type) {
	std::cout << "create Materia call ! " << type << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_src[i] && this->_src[i]->getType() == type) {
			return (this->_src[i]->clone());
		}
	}
	return (0);
}
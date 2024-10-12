/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalangi <amalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 01:40:13 by amalangi          #+#    #+#             */
/*   Updated: 2024/10/13 01:40:14 by amalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
    this->name = "Default";
    this->health = 10;
    this->stamina = 10;
    this->attackPoint = 0;
    std::cout << "Default constructor called, so created default ClapTrap !" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
    this->name = name;
    this->health = 10;
    this->stamina = 10;
    this->attackPoint = 0;
    std::cout << name << " the ClapTrap Created !" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj) {
    this->name = obj.name;
    this->health = obj.health;
    this->stamina = obj.stamina;
    this->attackPoint = obj.attackPoint;
    std::cout << "Copy constructor of ClapTrap called !" << std::endl;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "Destructor of ClapTrap called for " << this->name << " !" << std::endl; 
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj) {
    this->name = obj.name;
    this->health = obj.health;
    this->stamina = obj.stamina;
    this->attackPoint = obj.attackPoint;
    return (*this);
}

void ClapTrap::attack(const std::string& target) {
    if (this->stamina > 0 && this->health > 0){
        this->stamina--;
        std::cout << "ClapTrap " << this->name << " attacks " << target
            << ", causing " << this->attackPoint << " points of damage !" << std::endl;
        return ;
    }
    std::cout << this->name << " the ClapTrap can't attack now" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    int tmpHealth = this->health - amount;
    this->health = tmpHealth > 0 ? tmpHealth : 0;
    std::cout << "ClapTrap " << this->name << " Take " << amount
        << " points of damage ! He has now " << this->health << " health points !" <<  std::endl;  
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->stamina > 0 && this->health > 0){
        this->stamina--;
        this->health += amount;
        std::cout << "ClapTrap " << this->name << " repair itself and win "
            << amount << " Health points" << std::endl;
        return ;
    }
    std::cout << this->name << " can't repair itself now !" << std::endl;
}

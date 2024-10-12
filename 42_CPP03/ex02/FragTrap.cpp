/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalangi <amalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 01:40:19 by amalangi          #+#    #+#             */
/*   Updated: 2024/10/13 01:40:19 by amalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
    this->name = "Default";
    this->health = 100;
    this->stamina = 100;
    this->attackPoint = 30;
    std::cout << "Default constructor called, so created default FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string name) {
    this->name = name;
    this->health = 100;
    this->stamina = 100;
    this->attackPoint = 30;
    std::cout << name << " the FragTrap created !" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj) {
    this->name = obj.name;
    this->health = obj.health;
    this->stamina = obj.stamina;
    this->attackPoint = obj.attackPoint;
    std::cout << "Copy constructor FragTrap called !" << std::endl;
}

FragTrap::~FragTrap(void) {
    std::cout << "Destructor of FragTrap called for " << this->name << " !" << std::endl; 
}


void FragTrap::highFivesGuys() {
    if (this->stamina > 0 && this->health > 0){
        this->stamina--;
        std::cout << this->name << " the FragTrap request a high five !" << std::endl;
        return ;
    }
}
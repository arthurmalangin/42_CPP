/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalangi <amalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 01:40:08 by amalangi          #+#    #+#             */
/*   Updated: 2024/10/13 01:40:08 by amalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
    this->name = "Default";
    this->health = 100;
    this->stamina = 50;
    this->attackPoint = 20;
    this->keeperMode = false;
    std::cout << "Default constructor called, so created default ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
    this->name = name;
    this->health = 100;
    this->stamina = 50;
    this->attackPoint = 20;
    this->keeperMode = false;
    std::cout << name << " the ScavTrap created !" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj) {
    this->name = obj.name;
    this->health = obj.health;
    this->stamina = obj.stamina;
    this->attackPoint = obj.attackPoint;
    this->keeperMode = obj.keeperMode;
    std::cout << "Copy constructor ScavTrap called !" << std::endl;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "Destructor of ScavTrap called for " << this->name << " !" << std::endl; 
}

void ScavTrap::attack(const std::string& target) {
    if (this->stamina > 0 && this->health > 0){
        this->stamina--;
        std::cout << "ScavTrap " << this->name << " attacks " << target
            << ", causing " << this->attackPoint << " points of damage !" << std::endl;
        return ;
    }
    std::cout << this->name << " the ScavTrap, can't attack now !" << std::endl;
}

void ScavTrap::guardGate() {
    if (this->stamina > 0 && this->health > 0){
        this->stamina--;
        this->keeperMode = true;
        std::cout << this->name << " the ScavTrap is now in Gate Keeper Mode !" << std::endl;
        return ;
    }
    std::cout << this->name << " want be keep the Gate, but he can't !" << std::endl;
}
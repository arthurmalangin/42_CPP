/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalangi <amalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 01:39:41 by amalangi          #+#    #+#             */
/*   Updated: 2024/10/13 01:39:42 by amalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void ) {
	ClapTrap a("copain");
	ClapTrap b(a);
	ScavTrap c("haha");
	ScavTrap e(c);
	ScavTrap d = c;

	std::cout << std::endl;
	a.attack("haha");
	c.takeDamage(10);
	c.attack("copain");
	a.takeDamage(20);
	a.attack("haha");
	c.guardGate();
	e.guardGate();
	std::cout << std::endl;
	return (0);
}
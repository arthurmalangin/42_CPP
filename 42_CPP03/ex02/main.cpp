/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalangi <amalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:52:35 by amalangi          #+#    #+#             */
/*   Updated: 2024/10/13 01:39:37 by amalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {
	ClapTrap a("Clap");
	ClapTrap b("Clap2");
	ScavTrap c("Scav");
	FragTrap d("Frag");
	FragTrap e(d);
	ScavTrap f(c);

	FragTrap tmp;

	tmp = e;
	FragTrap g(tmp);

	std::cout << std::endl;
	a.attack("Clap2");
	c.takeDamage(0);
	d.beRepaired(10);
	d.highFivesGuys();
	d.attack("Clap2");
	b.takeDamage(20);
	c.guardGate();
	std::cout << std::endl;
	return (0);
}

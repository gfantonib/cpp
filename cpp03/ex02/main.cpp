/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:21:45 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/02 14:55:53 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void ClapTrapTest( void );
void ScavTrapTest( void );
void FragTrapTest( void );

int main( void )
{
	std::cout << std::endl;
	ClapTrapTest();
	std::cout << std::endl;
	ScavTrapTest();
	std::cout << std::endl;	
	FragTrapTest();
	std::cout << std::endl;
	return 0;
}

void ClapTrapTest( void )
{
	std::cout << "CLAPTRAP TEST" << std::endl << std::endl;
	ClapTrap blue("blue");
	
	blue.defineAttackDamage(3);
	blue.attack("red");
	blue.takeDamage(5);
	blue.beRepaired(2);
	blue.showPoints();
}

void ScavTrapTest( void )
{
	std::cout << "SCAVTRAP TEST" << std::endl << std::endl;
	ScavTrap emerald("emerald");
	
	emerald.attack("ruby");
	emerald.takeDamage(5);
	emerald.beRepaired(2);
	emerald.guardGate();
	emerald.showPoints();
}

void FragTrapTest( void )
{
	std::cout << "FRAGTRAP TEST" << std::endl << std::endl;
	FragTrap emerald("celestial pink");
	
	emerald.attack("dark black");
	emerald.takeDamage(50);
	emerald.beRepaired(30);
	emerald.highFivesGuys();
	emerald.showPoints();
}
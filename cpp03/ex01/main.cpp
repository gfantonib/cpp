/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:21:45 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/06 15:28:09 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void ClapTrapTest( void );
void ScavTrapTest( void );
void CopyTest( void );

int main( void )
{
	std::cout << std::endl;
	ClapTrapTest();
	std::cout << std::endl;
	ScavTrapTest();
	std::cout << std::endl;
	CopyTest();
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

void CopyTest( void )
{
	std::cout << "COPY TEST" << std::endl << std::endl;
	ScavTrap emerald("emerald");
	
	emerald.attack("ruby");
	emerald.takeDamage(5);
	emerald.beRepaired(2);
	emerald.guardGate();
	emerald.showPoints();

	std::cout << std::endl;
	ScavTrap fresh(emerald);
	fresh.showPoints();
}
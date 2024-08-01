/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:21:45 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/01 14:52:27 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) 
{
	ClapTrap blue("blue");
	ClapTrap red("red");
	blue.defineAttackDamage(3);
	red.defineAttackDamage(2);

	blue.attack("red");
	red.takeDamage(3);
	blue.attack("red");
	red.takeDamage(3);
	blue.attack("red");
	red.takeDamage(3);

	red.beRepaired(3);
	red.beRepaired(3);
	red.beRepaired(3);
	red.beRepaired(3);
	
	red.attack("blue");
	red.attack("blue");

	red.showPoints();
	blue.showPoints();
}
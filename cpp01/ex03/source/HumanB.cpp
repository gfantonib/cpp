/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 18:36:20 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/07 19:06:30 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string newname )
{
	name = newname;
	gun = NULL;
}

void HumanB::attack( void )
{
	if (gun == NULL)
		std::cout << name << " attacks with their " << "..." << std::endl;
	else
		std::cout << name << " attacks with their " << gun->getType() << std::endl;
}

void HumanB::setWeapon( Weapon& newgun )
{
	gun = &newgun;
}

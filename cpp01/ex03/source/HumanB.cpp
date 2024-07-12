/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 18:36:20 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/12 18:56:08 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string newname)
{
	name = newname;
}

void HumanB::attack(void)
{
	std::string str;
	
	str = *gun.getType();
	if (str == "")
		str = "...";
	std::cout << name << " attacks with their " << str << std::endl;
}

void HumanB::setWeapon(Weapon newgun)
{
	gun = newgun;
}

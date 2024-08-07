/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 18:20:04 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/07 18:18:18 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string newname, Weapon& newgun )
{
	name = newname;
	gun = &newgun;
}

void HumanA::attack( void )
{
	std::cout << name << " attacks with their " 
	<< gun->getType() << std::endl;
}
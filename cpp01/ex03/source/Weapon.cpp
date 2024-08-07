/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:28:53 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/07 18:23:46 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void): type(""){} // default constructor
Weapon::Weapon(std::string type): type(type){} // constructor

std::string const& Weapon::getType( void )
{
	return(type);
}

void Weapon::setType(std::string newtype)
{
	type = newtype;
}
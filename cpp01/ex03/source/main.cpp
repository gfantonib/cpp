/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:21:45 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/12 18:57:56 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Weapon.hpp"

#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	Weapon pistol("pistol");
	Weapon knive("knive");
	HumanA oliver("oliver", pistol);
	HumanB helio("helio");
	
	oliver.attack();
	helio.attack();
	helio.setWeapon(knive);
	helio.attack();
	return (0);
}

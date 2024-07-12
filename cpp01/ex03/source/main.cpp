/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:21:45 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/12 19:02:04 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Weapon.hpp"

#include "HumanA.hpp"
#include "HumanB.hpp"

// int main(void)
// {
// 	Weapon pistol("pistol");
// 	Weapon knive("knive");
// 	HumanA oliver("oliver", pistol);
// 	HumanB helio("helio");
	
// 	oliver.attack();
// 	helio.attack();
// 	helio.setWeapon(knive);
// 	helio.attack();
// 	return (0);
// }
int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}
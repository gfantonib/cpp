/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 15:44:31 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/12 15:44:50 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* zombiehorde;
	
	zombiehorde = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombiehorde[i].setZombieName(name);
	return (&zombiehorde[0]);
}
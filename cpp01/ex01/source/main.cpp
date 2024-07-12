/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:21:45 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/12 14:47:32 by gfantoni         ###   ########.fr       */
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

int main(void)
{
	int N;
	Zombie *benjorhorde;

	N = 10;
	benjorhorde = zombieHorde(N, "benjor");
	for (int i = 0; i < N; i++)
	{
		std::cout << i+1 << ". ";
		benjorhorde[i].announce();
	}
	delete [] benjorhorde;
	return (0);
}

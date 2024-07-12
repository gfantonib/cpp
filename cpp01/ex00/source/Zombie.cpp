/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:42:13 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/12 19:47:19 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Zombie::Zombie(void): name("") {}
Zombie::Zombie(std::string name): name(name) {} // default constructor
Zombie::~Zombie(void){std::cout << name << " is beeing destroyed!" << std::endl;} // destructor

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

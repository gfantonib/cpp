/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 08:19:13 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/02 14:51:11 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Default constructor called.
FragTrap::FragTrap( void ) : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

// String arg constructor.
FragTrap::FragTrap( std::string arg ) : ClapTrap( arg )
{
	std::cout << "FragTrap string arg constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

// Copy Constructor
FragTrap::FragTrap( const FragTrap &to_be_copied ) : ClapTrap( to_be_copied )
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

// Destructor
FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

// Member functions
void FragTrap::attack(const std::string& target)
{
	if (isDead() || isWeek())
		return;
	this->energy_points--;
	std::cout << "FragTrap " << this->name << " attacks "
	<< target << " causing " << this->attack_damage << " points of damage!"
	<< std::endl;
}

void FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap is now requesting a hight five!" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 08:19:13 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/07 14:07:43 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Default constructor called.
ScavTrap::ScavTrap( void ) : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

// String arg constructor.
ScavTrap::ScavTrap( std::string arg ) : ClapTrap( arg )
{
	std::cout << "ScavTrap string arg constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

// Copy Constructor
ScavTrap::ScavTrap( const ScavTrap &to_be_copied ) : ClapTrap( to_be_copied )
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

// Copy assignment operator
ScavTrap& ScavTrap::operator = ( const ScavTrap &to_be_copied )
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	
	if (this != &to_be_copied)
	{
		*this = to_be_copied;
	}
	return *this;
}

// Destructor
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

// Member functions
void ScavTrap::attack(const std::string& target)
{
	if (isDead() || isWeek())
		return;
	this->energy_points--;
	std::cout << "ScavTrap " << this->name << " attacks "
	<< target << " causing " << this->attack_damage << " points of damage!"
	<< std::endl;
}

void ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

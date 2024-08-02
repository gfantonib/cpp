/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:26:19 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/01 14:53:25 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->name = "";
	this->hit_points = -1;
	this->energy_points = -1;
	this->attack_damage = -1;
}

ClapTrap::ClapTrap( std::string arg )
{
	std::cout << "String arg constructor called" << std::endl;
	this->name = arg;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap( const ClapTrap &to_be_copied )
{
	std::cout << "Copy constructor called" << std::endl;
	
	*this = to_be_copied;
}

ClapTrap& ClapTrap::operator = ( const ClapTrap &to_be_copied )
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	if (this != &to_be_copied)
	{
		this->name = to_be_copied.name;
		this->hit_points = to_be_copied.hit_points;
		this->energy_points = to_be_copied.energy_points;
		this->attack_damage = to_be_copied.attack_damage;
	}
	return *this;
}

// Destructor
ClapTrap::~ClapTrap( void )
{
	std::cout << "Destructor called" << std::endl;
}

// Member functions
void ClapTrap::attack(const std::string& target)
{
	if (isDead() || isWeek())
		return;
	this->energy_points--;
	std::cout << "ClapTrap " << this->name << " attacks "
	<< target << " causing " << this->attack_damage << " points of damage!"
	<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (isDead())
		return;
	this->hit_points -= amount;
	std::cout << "ClapTrap " << this->name << " takes "
	<< amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (isDead() || isWeek())
		return;
	if (this->energy_points - (int)amount < 0)
	{
		this->hit_points += this->energy_points;
		this->energy_points = 0;
	}
	else
	{
		this->energy_points -= amount;
		this->hit_points += amount;
	}
	std::cout << "ClapTrap " << this->name << " spent "
	<< amount << " energy points to heal " << std::endl;
}

void ClapTrap::defineAttackDamage(unsigned int amount)
{
	this->attack_damage = amount;
	std::cout << "ClapTrap " << this->name << " has "
	<< amount << " of attack damage " << std::endl;
}

bool ClapTrap::isDead( void )
{
	if (this->hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
		return 1;
	}
	return 0;
}

bool ClapTrap::isWeek( void )
{
	if (this->energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " has no more energy!" << std::endl;
		return 1;
	}
	return 0;
}

void ClapTrap::showPoints( void )
{
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "Hit points: " << this->hit_points << std::endl;
	std::cout << "Energy points: " << this->energy_points << std::endl;
	std::cout << "Attack Damage: " << this->attack_damage << std::endl;
}



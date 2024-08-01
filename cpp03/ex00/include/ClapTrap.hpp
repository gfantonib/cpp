/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:23:23 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/01 14:49:55 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
	std::string name;
	int hit_points;
	int energy_points;
	int attack_damage;
	
	public:
	// Constructors
	ClapTrap( void ); // Default constructor
	ClapTrap( std::string arg ); // String arg constructor
	ClapTrap( const ClapTrap &to_be_copied ); // Copy constructor
	ClapTrap &operator = ( const ClapTrap &to_be_copied ); // Copy assignment opertor
	
	// Destructor
	~ClapTrap( void );

	// Member functions
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void defineAttackDamage(unsigned int amount);
	bool isDead( void );
	bool isWeek( void );
	void showPoints( void );
};

#endif
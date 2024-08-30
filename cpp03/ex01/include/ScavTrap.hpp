/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:39:21 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/07 14:02:07 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap // Inherit the ClapTrap class.
{
	public:
	ScavTrap( void ); // Default constructor
	ScavTrap( std::string arg ); // String arg constructor
	ScavTrap( const ScavTrap &to_be_copied ); // Copy constructor
	ScavTrap &operator = ( const ScavTrap &to_be_copied ); // Copy assignment opertor
	~ScavTrap(); // Destructor.

	// Member functions
	void attack( const std::string& target );
	void guardGate( void );
};

#endif
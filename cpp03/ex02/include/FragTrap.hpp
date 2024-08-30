/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:39:21 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/07 14:08:22 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap // Inherit the ClapTrap class.
{
	public:
	FragTrap( void ); // Default constructor
	FragTrap( std::string arg ); // String arg constructor
	FragTrap( const FragTrap &to_be_copied ); // Copy constructor
	FragTrap &operator = ( const FragTrap &to_be_copied ); // Copy assignment opertor
	~FragTrap(); // Destructor.

	// Member functions
	void attack( const std::string& target );
	void highFivesGuys( void );
};

#endif
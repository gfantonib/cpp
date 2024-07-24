/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:26:19 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/24 15:28:38 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "Debug message!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "Info message!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "Warning message!" << std::endl;
}

void Harl::error( void )
{
	std::cout << "Error message!" << std::endl;
}

int Harl::test( int nbr )
{
	return (nbr += 10);  
}

void Harl::complain( std::string level )
{
	std::string levellst[4] =
	{
		"debug",
		"info",
		"warning",
		"error"
	};
	void (Harl::*function[4])( void ) = 
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	for (int i = 0; i < 4; i++)
	{
		if (levellst[i] == level)
		{
			(this->*function[i])();	
			return;
		}
	}
	std::cout << "invalid complain!" << std::endl;
}

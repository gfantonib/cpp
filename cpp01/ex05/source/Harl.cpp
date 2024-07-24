/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:26:19 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/24 15:04:50 by gfantoni         ###   ########.fr       */
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
	typedef void (Harl::*poiter_to_function)( void );
	std::map <std::string, poiter_to_function> functionMap;

	functionMap["debug"] = &Harl::debug;
	functionMap["info"] = &Harl::info;
	functionMap["warning"] = &Harl::warning;
	functionMap["error"] = &Harl::error;
	
	std::map<std::string, poiter_to_function>::iterator it = functionMap.find(level);
	if (it != functionMap.end())
	{
		poiter_to_function function = it->second;
		(this->*function)();
	}
	else
		std::cout << "invalid complain!" << std::endl;
}

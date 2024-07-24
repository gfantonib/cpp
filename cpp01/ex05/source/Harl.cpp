/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:26:19 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/24 14:49:52 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int Harl::test( int nbr )
{
	return (nbr += 10);  
}

void Harl::complain( std::string level )
{
	typedef void (Harl::*poiter_to_function)( void );
	std::map <std::string, poiter_to_function> functionMap;
	
	// functionMap = 
	// {
	// 	{"debug", &Harl::debug},	
	// 	{"info", &Harl::info},	
	// 	{"warning", &Harl::warning},	
	// 	{"error", &Harl::error}
	// };

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

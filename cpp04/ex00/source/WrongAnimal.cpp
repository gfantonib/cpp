/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:26:19 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/05 08:31:39 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Constructors
WrongAnimal::WrongAnimal( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->type = "Generic WrongAnimal";
}

WrongAnimal::WrongAnimal( std::string arg )
{
	std::cout << "String arg constructor called" << std::endl;
	this->type = arg;
}

WrongAnimal::WrongAnimal( const WrongAnimal &to_be_copied )
{
	std::cout << "Copy constructor called" << std::endl;
	
	*this = to_be_copied;
}

WrongAnimal& WrongAnimal::operator = ( const WrongAnimal &to_be_copied )
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	if (this != &to_be_copied)
	{
		this->type = to_be_copied.type;
	}
	return *this;
}

// Destructor
WrongAnimal::~WrongAnimal( void )
{
	std::cout << "Destructor called" << std::endl;
}

// Member functions
void WrongAnimal::makeSound( void ) const
{
	std::cout << "ernst! ernst! ernst!" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
	return this->type;
}

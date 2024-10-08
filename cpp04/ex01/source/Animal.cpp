/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:26:19 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/07 14:31:39 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors
Animal::Animal( void )
{
	std::cout << "Animal default constructor called." << std::endl;
	this->type = "Generic Animal";

}
// String constructor
Animal::Animal( std::string arg )
{
	std::cout << "Animal string constructor called." << std::endl;
	this->type = arg;

}

// Copy constructor
Animal::Animal( const Animal &to_be_copied )
{
	std::cout << "Animal copy constructor called." << std::endl;
	this->type = to_be_copied.type;
}

// Copy assignment operator
Animal& Animal::operator = ( const Animal &to_be_copied )
{
	std::cout << "Animal copy assignment operator called." << std::endl;
	
	if (this != &to_be_copied)
	{
		this->type = to_be_copied.type;
	}
	return *this;
}

// Destructor
Animal::~Animal( void )
{
	std::cout << "Animal destructor called." << std::endl;
}

// Member functions
void Animal::makeSound( void ) const
{
	std::cout << "ernst! ernst! ernst!" << std::endl;
}

void Animal::setType( std::string str )
{
	this->type = str;
}

std::string Animal::getType( void ) const
{
	return this->type;
}

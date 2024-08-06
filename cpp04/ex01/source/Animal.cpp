/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:26:19 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/06 11:14:30 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors
Animal::Animal( void )
{
	std::cout << "Animal default constructor called" << std::endl;
	this->getType("Generic Animal");
}

Animal::Animal( std::string arg )
{
	std::cout << "Animal string arg constructor called" << std::endl;
	this->getType(arg);
}

Animal::Animal( const Animal &to_be_copied )
{
	std::cout << "Animal copy constructor called" << std::endl;
	
	*this = to_be_copied;
}

Animal& Animal::operator = ( const Animal &to_be_copied )
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	
	if (this != &to_be_copied)
	{
		this->getType(to_be_copied.type);
	}
	return *this;
}

// Destructor
Animal::~Animal( void )
{
	std::cout << "Animal destructor called" << std::endl;
}

// Member functions
void Animal::makeSound( void ) const
{
	std::cout << "ernst! ernst! ernst!" << std::endl;
}

void Animal::getType( std::string str )
{
	this->type = str;
}

std::string Animal::getType( void ) const
{
	return this->type;
}

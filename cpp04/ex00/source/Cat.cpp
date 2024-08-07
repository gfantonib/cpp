/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:26:19 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/07 14:37:18 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Default constructor
Cat::Cat( void ) : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->setType("Cat");
}

// String constructor
Cat::Cat( std::string arg ) : Animal ( arg )
{
	std::cout << "Cat string constructor called" << std::endl;
	this->setType("Cat");
}

// Copy constructor
Cat::Cat( const Cat &to_be_copied ) : Animal( to_be_copied )
{
	std::cout << "Cat copy constructor called" << std::endl;
}

// Copy assignment operator 
Cat& Cat::operator = ( const Cat &to_be_copied )
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	
	if (this != &to_be_copied)
	{
		this->setType(to_be_copied.getType());
	}
	return *this;
}

// Destructor
Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;
}

// Member functions
void Cat::makeSound( void ) const
{
	std::cout << "miaw! miaw! miaw! fuck you!" << std::endl;
}

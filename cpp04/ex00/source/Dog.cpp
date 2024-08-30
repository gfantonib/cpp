/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:26:19 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/07 14:42:29 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Default constructor
Dog::Dog( void ) : Animal() 
{
	std::cout << "Dog default constructor called" << std::endl;
	this->setType("Dog");
}

// String constructor
Dog::Dog( std::string arg ) : Animal ( arg )
{
	std::cout << "Dog string constructor called" << std::endl;
	this->setType("Dog");
}

// Copy constructor
Dog::Dog( const Dog &to_be_copied ) : Animal( to_be_copied ) 
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator = ( const Dog &to_be_copied )
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	
	if (this != &to_be_copied)
	{
		this->setType(to_be_copied.getType());
	}
	return *this;
}

// Destructor
Dog::~Dog( void ) 
{
	std::cout << "Dog destructor called" << std::endl;
}


// Member functions
void Dog::makeSound( void ) const
{
	std::cout << "woof! woof! woof! mother fucker!" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:26:19 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/07 14:48:43 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Default constructors
Dog::Dog( void ) : Animal()
{
	std::cout << "Dog default costructor called." << std::endl;
	this->setType("Dog");
	this->brain = new Brain();
}

// String constructor
Dog::Dog( std::string arg ) : Animal ( arg )
{
	std::cout << "Dog string costructor called." << std::endl;
	this->setType("Dog");
	this->brain = new Brain();
}

// Copy constructor
Dog::Dog( const Dog &to_be_copied ) : Animal( to_be_copied )
{
	std::cout << "Dog copy costructor called." << std::endl;
	this->brain = new Brain();
	*this = to_be_copied;
}

// Copy assignment operator
Dog& Dog::operator = ( const Dog &to_be_copied )
{
	std::cout << "Dog copy assignment operator called." << std::endl;
	
	if (this != &to_be_copied)
	{
		this->setType(to_be_copied.getType());
		*this->brain = *to_be_copied.brain;
	}
	return *this;
}

// Destructor
Dog::~Dog( void ) 
{
	std::cout << "Dog destructor called." << std::endl;
	delete this->brain;
}

// Member functions
void Dog::makeSound( void ) const
{
	std::cout << "woof! woof! woof! mother fucker." << std::endl;
}

void Dog::setBrain( std::string idea )
{
	this->brain->setIdeas( idea );
}

void Dog::showBrain( void )
{
	this->brain->showIdeas();
}
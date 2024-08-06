/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:26:19 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/06 14:29:13 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Default constructors
Cat::Cat( void ) : Animal()
{
	std::cout << "Cat default costructor called." << std::endl;
	this->getType("Cat");
	this->brain = new Brain();
}
// String constructor
Cat::Cat( std::string arg ) : Animal( arg )
{
	std::cout << "Cat string arg costructor called." << std::endl;
	this->getType("Cat");
	this->brain = new Brain();
}

// Copy constructor
Cat::Cat( const Cat &to_be_copied ) : Animal( to_be_copied )
{
	std::cout << "Cat Copy costructor called." << std::endl;
	this->brain = new Brain();
	*this = to_be_copied;
}

// Copy assignment operator
Cat& Cat::operator = ( const Cat &to_be_copied )
{
	std::cout << "Cat copy assignment operator called." << std::endl;
	
	if (this != &to_be_copied)
	{
		*this->brain = *to_be_copied.brain;
	}
	return *this;
}

// Destructor
Cat::~Cat( void )
{
	std::cout << "Cat destructor called." << std::endl;
	delete this->brain;
}

// Member functions
void Cat::makeSound( void ) const
{
	std::cout << "miaw! miaw! miaw! fuck you!" << std::endl;
}

void Cat::setBrain( std::string idea )
{
	this->brain->setIdeas( idea );
}

void Cat::showBrain( void )
{
	this->brain->showIdeas();
}
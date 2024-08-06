/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:26:19 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/06 11:44:45 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat( void ) : Animal()
{
	std::cout << "Cat default costructor called!" << std::endl;
	this->getType("Cat");
	this->brain = new Brain();
}

Cat::Cat( std::string arg ) : Animal( arg )
{
	std::cout << "Cat string arg costructor called!" << std::endl;
	this->getType("Cat");
	this->brain = new Brain();
}

Cat::Cat( const Cat &to_be_copied ) : Animal( to_be_copied )
{
	std::cout << "Cat Copy costructor called!" << std::endl;
	*this = to_be_copied;
}

// Destructor
Cat::~Cat( void )
{
	std::cout << "Cat destructor called!" << std::endl;
	delete this->brain;
}

Cat& Cat::operator = ( const Cat &to_be_copied )
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	
	if (this != &to_be_copied)
	{
		*this->brain = *to_be_copied.brain;
	}
	return *this;
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
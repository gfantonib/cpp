/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:26:19 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/06 10:09:19 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat( void ) : Animal()
{
	std::cout << "Cat default costructor called!" << std::endl;
	this->id = -1;
	this->type = "Cat";
}

Cat::Cat( std::string arg ) : Animal( arg )
{
	std::cout << "Cat string arg costructor called!" << std::endl;
	this->type = "Cat";
}

Cat::Cat( const Cat &to_be_copied ) : Animal( to_be_copied )
{
	std::cout << "Cat Copy costructor called!" << std::endl;
}

// Destructor
Cat::~Cat( void )
{
	std::cout << "Cat destructor called!" << std::endl;
}

Cat& Cat::operator = ( const Cat &to_be_copied )
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	
	if (this != &to_be_copied)
	{
		Animal::operator=(to_be_copied);
		this->id = to_be_copied.id;
	}
	return *this;
}

// Member functions
void Cat::makeSound( void ) const
{
	std::cout << "miaw! miaw! miaw! fuck you!" << std::endl;
}

void Cat::setID( int nbr )
{
	this->id = nbr;
}

void Cat::showID( void )
{
	std::cout << this->id << std::endl;
}
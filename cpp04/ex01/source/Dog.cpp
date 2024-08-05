/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:26:19 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/05 19:07:36 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors
Dog::Dog( void ) : Animal()
{
	std::cout << "Dog default costructor called!" << std::endl;
	this->id = -1;
	this->type = "Dog";
}

Dog::Dog( std::string arg ) : Animal ( arg )
{
	std::cout << "Dog string arg costructor called!" << std::endl;
	this->type = "Dog";
}

Dog::Dog( const Dog &to_be_copied ) : Animal( to_be_copied )
{
	std::cout << "Dog copy costructor called!" << std::endl;
}

// Destructor
Dog::~Dog( void ) 
{
	std::cout << "Dog destructor called!" << std::endl;
}

// Dog& Dog::operator = ( const Dog &to_be_copied )
// {
// 	std::cout << "Copy assignment operator called" << std::endl;
	
// 	if (this != &to_be_copied)
// 	{
// 		this->type = to_be_copied.type;
// 	}
// 	return *this;
// }

// Member functions
void Dog::makeSound( void ) const
{
	std::cout << "woof! woof! woof! mother fucker!" << std::endl;
}

void Dog::setID( int nbr )
{
	this->id = nbr;
}

void Dog::showID( void )
{
	std::cout << this->id << std::endl;
}
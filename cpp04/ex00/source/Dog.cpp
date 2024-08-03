/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:26:19 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/03 09:40:33 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors
Dog::Dog( void ) : Animal() 
{
	this->type = "Dog";
}

Dog::Dog( std::string arg ) : Animal ( arg )
{
	this->type = "Dog";
}

Dog::Dog( const Dog &to_be_copied ) : Animal( to_be_copied ) {}

// Destructor
Dog::~Dog( void ) {}

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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:26:19 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/03 09:40:52 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat( void ) : Animal() 
{
	this->type = "Cat";
}

Cat::Cat( std::string arg ) : Animal ( arg )
{
	this->type = "Cat";
}

Cat::Cat( const Cat &to_be_copied ) : Animal( to_be_copied ) {}

// Destructor
Cat::~Cat( void ) {}

// Cat& Cat::operator = ( const Cat &to_be_copied )
// {
// 	std::cout << "Copy assignment operator called" << std::endl;
	
// 	if (this != &to_be_copied)
// 	{
// 		this->type = to_be_copied.type;
// 	}
// 	return *this;
// }

// Member functions
void Cat::makeSound( void ) const
{
	std::cout << "miaw! miaw! miaw! fuck you!" << std::endl;
}
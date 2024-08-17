/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:26:19 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/17 14:56:04 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Constructors
WrongCat::WrongCat( void ) : WrongAnimal() 
{
	this->type = "WrongCat";
}

WrongCat::WrongCat( std::string arg ) : WrongAnimal ( arg )
{
	this->type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat &to_be_copied ) : WrongAnimal( to_be_copied ) {}

// Copy assignment operator 
WrongCat& WrongCat::operator = ( const WrongCat &to_be_copied )
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	
	if (this != &to_be_copied)
	{
		this->type = to_be_copied.type;
	}
	return *this;
}

// Destructor
WrongCat::~WrongCat( void ) {}

// Member functions
void WrongCat::makeSound( void ) const
{
	std::cout << "miaw! miaw! miaw! fuck you!" << std::endl;
}
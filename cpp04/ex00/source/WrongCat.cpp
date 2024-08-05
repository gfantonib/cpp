/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:26:19 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/05 08:34:09 by gfantoni         ###   ########.fr       */
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

// Destructor
WrongCat::~WrongCat( void ) {}

// Member functions
void WrongCat::makeSound( void ) const
{
	std::cout << "miaw! miaw! miaw! fuck you!" << std::endl;
}
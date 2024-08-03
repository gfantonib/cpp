/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:23:23 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/03 09:45:14 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	private:
	std::string type;

	public:
	// Constructors
	Animal( void ); // Default constructor
	Animal( std::string arg ); // String arg constructor
	Animal( const Animal &to_be_copied ); // Copy constructor
	Animal &operator = ( const Animal &to_be_copied ); // Copy assignment opertor

	// Destructor
	~Animal();

	// Member functions
	virtual void makeSound( void ) const;
	std::string getType( void ) const;
};

#endif
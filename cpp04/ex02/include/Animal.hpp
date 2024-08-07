/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:23:23 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/07 15:28:25 by gfantoni         ###   ########.fr       */
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
	Animal( void ); // Default constructor
	Animal( std::string arg ); // String arg constructor
	Animal( const Animal &to_be_copied ); // Copy constructor
	Animal &operator = ( const Animal &to_be_copied ); // Copy assignment opertor

	// Destructor
	virtual ~Animal();

	// Member functions
	virtual void makeSound( void ) const = 0; // This is a pure virtual function and it prohibits for you to declare a Anmial type.
	void setType( std::string str );
	std::string getType( void ) const;
};

#endif
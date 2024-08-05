/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:23:23 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/05 08:32:05 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	private:
	std::string type;

	public:
	// Constructors
	WrongAnimal( void ); // Default constructor
	WrongAnimal( std::string arg ); // String arg constructor
	WrongAnimal( const WrongAnimal &to_be_copied ); // Copy constructor
	WrongAnimal &operator = ( const WrongAnimal &to_be_copied ); // Copy assignment opertor

	// Destructor
	virtual ~WrongAnimal();

	// Member functions
	void makeSound( void ) const;
	std::string getType( void ) const;
};

#endif
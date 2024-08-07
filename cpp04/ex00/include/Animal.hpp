/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:23:23 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/07 14:33:21 by gfantoni         ###   ########.fr       */
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
	Animal( std::string arg ); // String constructor
	Animal( const Animal &to_be_copied ); // Copy constructor
	Animal &operator = ( const Animal &to_be_copied ); // Copy assignment opertor
	virtual ~Animal(); // Destructor

	// Member functions
	virtual void makeSound( void ) const;
	void setType( std::string str );
	std::string getType( void ) const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:23:23 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/07 14:39:51 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private:
	std::string type;
	
	public:
	Dog( void ); // Default constructor
	Dog( std::string arg ); // String arg constructor
	Dog( const Dog &to_be_copied ); // Copy constructor
	Dog &operator = ( const Dog &to_be_copied ); // Copy assignment opertor

	
	~Dog(); // Destructor

	// Member functions
	void makeSound( void ) const;
};

#endif
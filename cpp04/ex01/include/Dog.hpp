/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:23:23 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/17 15:16:55 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
	Brain* brain;

	public:
	Dog( void ); // Default constructor
	Dog( std::string arg ); // String constructor
	Dog( const Dog &to_be_copied ); // Copy constructor
	Dog &operator = ( const Dog &to_be_copied ); // Copy assignment opertor
	virtual ~Dog(); // Destructor

	// Member functions
	void makeSound( void ) const;
	void setBrain( std::string idea );
	void showBrain( void );
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:23:23 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/17 15:23:53 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
	Brain* brain;
	
	public:
	Cat( void ); // Default constructor
	Cat( std::string arg ); // String constructor
	Cat( const Cat &to_be_copied ); // Copy constructor
	Cat &operator = ( const Cat &to_be_copied ); // Copy assignment opertor
	virtual ~Cat(); // Destructor

	// Member functions
	void makeSound( void ) const;
	void setBrain( std::string idea );
	void showBrain( void );
	void showBrainMem( void );
};

#endif
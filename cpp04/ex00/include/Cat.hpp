/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:23:23 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/07 14:16:29 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:
	
	public:
	Cat( void ); // Default constructor
	Cat( std::string arg ); // String constructor
	Cat( const Cat &to_be_copied ); // Copy constructor
	Cat &operator = ( const Cat &to_be_copied ); // Copy assignment opertor
	~Cat(); // Destructor

	// Member functions
	void makeSound( void ) const;
};

#endif
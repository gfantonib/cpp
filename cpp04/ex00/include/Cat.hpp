/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:23:23 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/03 09:40:39 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:
	std::string type;
	
	public:
	Cat( void ); // Default constructor
	Cat( std::string arg ); // String arg constructor
	Cat( const Cat &to_be_copied ); // Copy constructor
	
	~Cat(); // Destructor

	// Member functions
	void makeSound( void ) const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:23:23 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/05 09:31:01 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
	std::string ideas[100];

	public:
	// Constructors
	Brain( void ); // Default constructor
	// Brain( std::string arg ); // String arg constructor
	Brain( const Brain &to_be_copied ); // Copy constructor
	Brain &operator = ( const Brain &to_be_copied ); // Copy assignment opertor

	// Destructor
	virtual ~Brain();

	// Member functions
	void setIdeas( std::string idea );
	void showIdeas( void );
	// virtual void makeSound( void ) const;
	// std::string getType( void ) const;
};

#endif
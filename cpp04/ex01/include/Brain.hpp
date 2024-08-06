/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:23:23 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/06 14:32:17 by gfantoni         ###   ########.fr       */
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
	Brain( void ); // Default constructor
	Brain( std::string arg ); // String arg constructor
	Brain( const Brain &to_be_copied ); // Copy constructor
	Brain &operator = ( const Brain &to_be_copied ); // Copy assignment opertor
	virtual ~Brain(); // Destructor

	// Member functions
	void setIdeas( std::string idea );
	void showIdeas( void );
};

#endif
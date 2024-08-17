/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:23:23 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/17 14:54:09 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
	std::string type;
	
	public:
	WrongCat( void ); // Default constructor
	WrongCat( std::string arg ); // String arg constructor
	WrongCat( const WrongCat &to_be_copied ); // Copy constructor
	WrongCat &operator = ( const WrongCat &to_be_copied ); // Copy assignment opertor
	~WrongCat(); // Destructor

	// Member functions
	void makeSound( void ) const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:22:45 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/07 17:52:03 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON
#define WEAPON

#include <iostream>

class Weapon
{
	private:
		std::string type;

	public:
		Weapon(void); // default constructor
		Weapon(std::string); // constructor
		
		std::string const& getType( void );
		void setType( std::string newtype );
};

#endif
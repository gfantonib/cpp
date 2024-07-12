/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombi.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:31:27 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/12 14:22:09 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	private:
		std::string name;
		
	public:
		Zombie(void); // default constructor
		Zombie(std::string name); // altenative constructor
		~Zombie(void); // destructor
		
		void setZombieName(std::string zombiename);
		void announce(void);
};
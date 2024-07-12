/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombi.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:31:27 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/12 11:47:39 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombi
{
	private:
		std::string name;
		
	public:
		// Zombi(void);
		Zombi(std::string name): name(name) {} // default constructor
		~Zombi(void){std::cout << name << " is beeing destroyed!" << std::endl;}
		void announce(void);
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:21:45 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/12 12:00:29 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombi.hpp"

Zombi* newZombi(std::string name);
void randomChump(std::string name);

int main(void)
{
	Zombi benjor("benjor");
	Zombi *benson;
	
	benjor.announce();
	benson = newZombi("benson");
	benson->announce();
	benjor.announce();
	randomChump("chump");
	delete(benson);
	return (0);
}

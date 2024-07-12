/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombi.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:37:11 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/12 11:37:40 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombi.hpp"

Zombi* newZombi(std::string name)
{
	Zombi* zombi_pointer;
	
	zombi_pointer = new Zombi(name);
	return (zombi_pointer);
}
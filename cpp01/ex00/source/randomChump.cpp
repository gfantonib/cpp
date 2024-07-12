/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:37:14 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/12 11:37:59 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombi.hpp"

void randomChump(std::string name)
{
	Zombi chump(name);
	chump.announce();
}
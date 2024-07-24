/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:21:45 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/24 15:02:57 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl something;
	
	std::cout << std::endl;
	something.complain("debug");
	std::cout << std::endl;
	something.complain("info");
	std::cout << std::endl;
	something.complain("warning");
	std::cout << std::endl;
	something.complain("error");
	std::cout << std::endl;
	something.complain("invalid");
	std::cout << std::endl;
	return (0);
}
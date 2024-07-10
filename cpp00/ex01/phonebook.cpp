/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:21:45 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/10 12:04:39 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string options(void);

int main(void)
{
	std::string userinput;
	
	userinput = options();
	std::cout << userinput << std::endl;
	return (0);
}

std::string options(void)
{
	std::string userinput;
	while (userinput != "ADD" && userinput != "SEARC" && userinput != "EXIT")
	{
		std::cout << std::endl << "-----menu-----" << std::endl << std::endl;
		std::cout << "ADD" << std::endl;
		std::cout << "SEARCH" << std::endl;
		std::cout << "EXIT" << std::endl << std::endl;
		std::cout << "> ";
		std::getline(std::cin, userinput);
	}
	return (userinput);
}
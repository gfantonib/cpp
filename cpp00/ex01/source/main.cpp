/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:21:45 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/10 19:04:25 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string options(void);

int main(void)
{
	PhoneBook phonebook;
	std::string userinput;
	
	while (userinput != "EXIT")
	{
		userinput = options();
		if (userinput == "ADD")
			phonebook.add();
		else if (userinput == "SEARCH")
			phonebook.search();
	}
	return (0);
}

std::string options(void)
{
	std::string userinput;
	while (userinput != "ADD" && userinput != "SEARCH" && userinput != "EXIT")
	{
		std::cout << std::endl << "----- main menu -----" << std::endl << std::endl;
		std::cout << "ADD" << std::endl;
		std::cout << "SEARCH" << std::endl;
		std::cout << "EXIT" << std::endl << std::endl;
		std::cout << "> ";
		std::getline(std::cin, userinput);
	}
	return (userinput);
}
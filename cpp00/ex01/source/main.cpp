/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:21:45 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/10 17:05:38 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string options(void);

int main(void)
{
	Contact someone;
	
	// std::string userinput;
	// userinput = options();
	// std::cout << userinput << std::endl;

	std::cout << someone.getFirstName() << std::endl;
	someone.setFirstName("melvin");
	someone.setFirstName("juni");
	std::cout << someone.getFirstName() << std::endl;
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
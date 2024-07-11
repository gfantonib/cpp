/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 20:05:27 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/11 12:30:06 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	i = 0;
	return ;
}

void PhoneBook::Add(void)
{
	std::string user_info;
	
	if (i == 8)
		i = 0;
		
	user_info = getUserInfo("First Name");
	contact_array[i].setFirstName(user_info);

	user_info = getUserInfo("Last Name");
	contact_array[i].setLastName(user_info);

	user_info = getUserInfo("Nickname");
	contact_array[i].setNickname(user_info);

	user_info = getUserInfo("Phone Number");
	contact_array[i].setPhoneNumber(user_info);

	user_info = getUserInfo("Darkest Secret");
	contact_array[i].setDarkestSecret(user_info);

	i++;
}

void PhoneBook::Search(void)
{
	std::string str;
	
	str = contact_array[0].getFirstName();
	printFormatStr(str);
	std::cout << std::endl;
	
	// std::cout << contact_array[0].getLastName() << "|";
	// std::cout << contact_array[0].getNickname() << std::endl;

	// std::cout << contact_array[0].getPhoneNumber() << std::endl;
	// std::cout << contact_array[0].getDarkestSecret() << std::endl;
	
	// std::cout << std::endl;
	
	// std::cout << contact_array[1].getFirstName() << std::endl;
	// std::cout << contact_array[1].getLastName() << std::endl;
	// std::cout << contact_array[1].getNickname() << std::endl;
	// std::cout << contact_array[1].getPhoneNumber() << std::endl;
	// std::cout << contact_array[1].getDarkestSecret() << std::endl;

	// std::cout << std::endl;
	
	// std::cout << contact_array[2].getFirstName() << std::endl;
	// std::cout << contact_array[2].getLastName() << std::endl;
	// std::cout << contact_array[2].getNickname() << std::endl;
	// std::cout << contact_array[2].getPhoneNumber() << std::endl;
	// std::cout << contact_array[2].getDarkestSecret() << std::endl;

	// std::cout << std::endl;

	// std::cout << contact_array[3].getFirstName() << std::endl;
	// std::cout << contact_array[3].getLastName() << std::endl;
	// std::cout << contact_array[3].getNickname() << std::endl;
	// std::cout << contact_array[3].getPhoneNumber() << std::endl;
	// std::cout << contact_array[3].getDarkestSecret() << std::endl;

	// std::cout << std::endl;
	
	// std::cout << contact_array[4].getFirstName() << std::endl;
	// std::cout << contact_array[4].getLastName() << std::endl;
	// std::cout << contact_array[4].getNickname() << std::endl;
	// std::cout << contact_array[4].getPhoneNumber() << std::endl;
	// std::cout << contact_array[4].getDarkestSecret() << std::endl;

	// std::cout << std::endl;
	
	// std::cout << contact_array[5].getFirstName() << std::endl;
	// std::cout << contact_array[5].getLastName() << std::endl;
	// std::cout << contact_array[5].getNickname() << std::endl;
	// std::cout << contact_array[5].getPhoneNumber() << std::endl;
	// std::cout << contact_array[5].getDarkestSecret() << std::endl;
	
	// std::cout << std::endl;

	// std::cout << contact_array[6].getFirstName() << std::endl;
	// std::cout << contact_array[6].getLastName() << std::endl;
	// std::cout << contact_array[6].getNickname() << std::endl;
	// std::cout << contact_array[6].getPhoneNumber() << std::endl;
	// std::cout << contact_array[6].getDarkestSecret() << std::endl;

	// std::cout << std::endl;

	// std::cout << contact_array[7].getFirstName() << std::endl;
	// std::cout << contact_array[7].getLastName() << std::endl;
	// std::cout << contact_array[7].getNickname() << std::endl;
	// std::cout << contact_array[7].getPhoneNumber() << std::endl;
	// std::cout << contact_array[7].getDarkestSecret() << std::endl;
}

std::string PhoneBook::getUserInfo(std::string str)
{
	std::string buff;
	
	std::cout << "write the ";
	std::cout << str;
	std::cout << " here: ";
	std::getline(std::cin, buff);
	std::cout << std::endl;
	return (buff);
}

void PhoneBook::printFormatStr(std::string str)
{
	size_t	i;
	size_t	size;
	int		diff;
	
	size = str.size();
	diff = 10 - size;
	while (diff > 0)
	{
		std::cout << ' ';
		diff--;
	}
	i = 0;
	while (i < 10 && i < size)
	{
		if (i == 9)
			std::cout << '.';
		else
			std::cout << str[i];
		i++;
	}
}


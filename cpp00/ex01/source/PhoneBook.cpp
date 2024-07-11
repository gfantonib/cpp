/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 20:05:27 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/11 16:19:46 by gfantoni         ###   ########.fr       */
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
	
	std::cout << std::endl;
	
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
	int 		iter;
	int 		id;
	std::string str;
	
	std::cout << std::endl;
	
	iter = 0;
	while (iter < 8)
	{
		if (contact_array[iter].isValidContact())
		{
			std::cout << "|";
			std::cout << "         " << iter;
			
			std::cout << "|";
			str = contact_array[iter].getFirstName();
			printFormatStr(str);
			std::cout << "|";

			str = contact_array[iter].getLastName();
			printFormatStr(str);
			std::cout << "|";
			
			str = contact_array[iter].getNickname();
			printFormatStr(str);
			std::cout << "|";
			
			std::cout << std::endl << std::endl;
		}
		iter++;
	}
	id = getID();
	std::cout << std::endl;
	displayChosenContact(id);
}

std::string PhoneBook::getUserInfo(std::string str)
{
	std::string buff;
	
	std::cout << "write the ";
	std::cout << str;
	std::cout << " here: ";
	std::getline(std::cin, buff);
	// std::cout << std::endl;
	if (buff == "")
	{
		std::cout << std::endl;
		std::cout << "this field cant be empty!" << std::endl;
		std::cout << std::endl;
		buff = getUserInfo(str);
	}
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

int PhoneBook::getID()
{
	int id;
	std::string buff;
	std::cout << "select a index to be displayed: ";
	std::getline(std::cin, buff);
	id = buff[0] - '0';
	if (buff.size() == 1 && id >= 0 && id <= 7 && contact_array[id].isValidContact())
		return (id);
	std::cout << std::endl;
	std::cout << "not a valid index!" << std::endl;
	std::cout << std::endl;
	id = getID();
	return (id);
}
// int	PhoneBook::contactExist(Contact onecontact)
// {
// 	if (onecontact.getFirstName() != ""
// 		|| onecontact.getLastName() != ""
// 		|| onecontact.getNickname() != "")
// 		return (1);
// 	return (0);
// }

void PhoneBook::displayChosenContact(int id)
{
	std::cout << "First Name: " << contact_array[id].getFirstName() << std::endl;
	std::cout << "Last Name: " << contact_array[id].getLastName() << std::endl;
	std::cout << "Nickname: " << contact_array[id].getNickname() << std::endl;
	std::cout << "Phone Number: " << contact_array[id].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contact_array[id].getDarkestSecret() << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 20:05:27 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/10 20:16:05 by gfantoni         ###   ########.fr       */
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
}

void PhoneBook::Search(void)
{
	std::cout << contact_array[i].getFirstName() << std::endl;
	std::cout << contact_array[i].getLastName() << std::endl;
	std::cout << contact_array[i].getNickname() << std::endl;
	std::cout << contact_array[i].getPhoneNumber() << std::endl;
	std::cout << contact_array[i].getDarkestSecret() << std::endl;
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:42:13 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/10 19:37:09 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void): first_name(""),
						last_name(""),
						nickname(""),
						phone_number(""),
						darkest_secret("") {}

// Contact::Contact(void)
// {
// 	first_name = "";
// 	last_name = "";
// 	nickname = "";
// 	phone_number = "";
// 	darkest_secret = "";
// }

std::string Contact::getFirstName()
{
	return (first_name);
}

void Contact::setFirstName(std::string str)
{
	first_name = str;
}

std::string Contact::getLastName()
{
	return (last_name);
}

void Contact::setLastName(std::string str)
{
	last_name = str;
}

std::string Contact::getNickname()
{
	return (nickname);
}

void Contact::setNickname(std::string str)
{
	nickname = str;
}

std::string Contact::getPhoneNumber()
{
	return (phone_number);
}

void Contact::setPhoneNumber(std::string str)
{
	phone_number = str;
}

std::string Contact::getDarkestSecret()
{
	return (darkest_secret);
}

void Contact::setDarkestSecret(std::string str)
{
	darkest_secret = str;
}
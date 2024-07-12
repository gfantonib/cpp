/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:31:27 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/12 19:50:06 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	public:
		Contact(void);
				
		std::string getFirstName();
		void setFirstName(std::string str);
		
		std::string getLastName();
		void setLastName(std::string str);

		std::string getNickname();
		void setNickname(std::string str);

		std::string getPhoneNumber();
		void setPhoneNumber(std::string str);

		std::string getDarkestSecret();
		void setDarkestSecret(std::string str);

		int isValidContact();
};

#endif
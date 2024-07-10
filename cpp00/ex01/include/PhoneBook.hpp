/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:31:27 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/10 20:00:20 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook
{
	Contact contact_array[8];
	int		i;
	
	std::string store_user_input(std::string str);
	public:
		PhoneBook(void);
		void add(void);
		void search(void);
				
};

PhoneBook::PhoneBook(void)
{
	i = 0;
	return ;
}

void PhoneBook::add(void)
{
	std::string fn;
	fn = store_user_input("First Name");
	contact_array[i].setFirstName(fn);
}

void PhoneBook::search(void)
{
	std::cout << contact_array[i].getFirstName() << std::endl;
}

std::string PhoneBook::store_user_input(std::string str)
{
	std::string buff;
	
	std::cout << "write the ";
	std::cout << str;
	std::cout << " here: ";
	std::getline(std::cin, buff);
	std::cout << std::endl;
	return (buff);
}
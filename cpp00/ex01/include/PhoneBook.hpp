/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:31:27 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/10 18:57:17 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook
{
	Contact contact_array[8];

	public:
		PhoneBook(void);
		void add(void);
		void search(void);
				
};

PhoneBook::PhoneBook(void)
{
	return ;
}

void PhoneBook::add(void)
{
	std::cout << "add reached" << std::endl;
}

void PhoneBook::search(void)
{
	std::cout << "search reached" << std::endl;
}
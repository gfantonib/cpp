/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:31:27 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/25 08:05:40 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	Contact contact_array[8];
	int		i;
	
	std::string getUserInfo(std::string str);
	void		printFormatStr(std::string str);
	int			getID();
	void 		displayChosenContact(int id);
	public:
		PhoneBook(void);
		void Add(void);
		void Search(void);
				
};

#endif
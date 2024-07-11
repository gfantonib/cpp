/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:31:27 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/11 17:45:45 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	Contact contact_array[8];
	int		i;
	
	std::string getUserInfo(std::string str);
	void		printFormatStr(std::string str);
	int			getID();
	void 		displayChosenContact(int id);
	// int			contactExist(Contact onecontact);
	public:
		PhoneBook(void);
		void Add(void);
		void Search(void);
				
};
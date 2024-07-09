/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:51:17 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/09 15:50:01 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
	std::string std_message;
	
	std_message = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	if (argc == 1)
		std::cout << std_message;
	for (int i = 1; argv[i]; i++)
	{
		std::string str = argv[i];
		for (std::string::iterator iter = str.begin(); iter != str.end(); iter++)
			*iter = std::toupper(*iter);
		std::cout << str;
	}
	std::cout << std::endl;
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:19:59 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/19 16:43:44 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdlib>

int main(void)
{
	std::ofstream file1("file1");
	file1 << "xxxaaaaaa" << std::endl;
	file1 << "aaaxxxaaa" << std::endl;
	file1 << "aaaaaaxxx" << std::endl;
	std::string command("./executable file1 xxx yyy");
	system(command.c_str());

	std::ofstream file2("file2");
	file2 << "" << std::endl;
	command = "./executable file2 xxx yyy";
	system(command.c_str());
	return (0);
}
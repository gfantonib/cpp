/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:19:59 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/20 09:27:16 by gfantoni         ###   ########.fr       */
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

	std::ofstream file3("file3");
	// file3 << "" << std::endl;
	command = "./executable file3 xxx yyy";
	system(command.c_str());

	std::ofstream file4("file4");
	file4 << "aaaaaaaaa" << std::endl;
	file4 << "aaaaaaaaa" << std::endl;
	file4 << "aaaaaaaaa" << std::endl;
	command = "./executable file4 xxx yyy";
	system(command.c_str());

	std::ofstream file5("file5");
	file5 << "aaaaaaaaa" << std::endl;
	file5 << "aaaaaaaaa" << std::endl;
	file5 << "aaaaaaaaa" << std::endl;
	command = "./executable file5 '' yyy";
	system(command.c_str());

	std::ofstream file6("file6");
	file6 << "aaaaaaaaa" << std::endl;
	file6 << "aaaaaaaaa" << std::endl;
	file6 << "aaaaaaaaa" << std::endl;
	command = "./executable file6 xxx ''";
	system(command.c_str());

	std::ofstream file7("file7");
	file7 << "aaaxxxaaa" << std::endl;
	file7 << "aaaaaaaaa" << std::endl;
	file7 << "aaaxxxaaa" << std::endl;
	command = "./executable file7 xxx yyy";
	system(command.c_str());

	std::ofstream file8("file8");
	file8 << "xxxaaaxxx" << std::endl;
	file8 << "aaaxxxaaa" << std::endl;
	file8 << "xxxaaaxxx" << std::endl;
	command = "./executable file8 xxx yyy";
	system(command.c_str());
	return (0);
}
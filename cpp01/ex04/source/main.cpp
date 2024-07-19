/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:21:45 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/19 12:07:34 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
// #include <sstream>
// #include <string>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "wrong argument count!\nusage: ./executable filename s1 s2" << std::endl;
		return (1);
	}
	std::ifstream src_file(argv[1]);
	if (!src_file.is_open())
	{
		std::cout << "src_file could not be opened!" << std::endl;
		return (1);
	}
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	std::size_t s1_len = s1.length();
	// std::size_t s2_len = s2.length();
	std::string line;
	std::size_t start;
	while (std::getline(src_file, line))
	{
		start = line.find(s1);
		line.erase(start, s1_len);
		line.insert(start, s2);
		std::cout << line << std::endl;
	}
	src_file.close();
	return (0);
}
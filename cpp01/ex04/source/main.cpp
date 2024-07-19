/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:21:45 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/19 11:55:29 by gfantoni         ###   ########.fr       */
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
		std::cout << "wrong argument count!\nusage: ./loser filename s1 s2" << std::endl;
		return (1);
	}
	std::ifstream src_file(argv[1]);
	if (!src_file.is_open())
	{
		std::cout << "src_file could not be opened!" << std::endl;
		return (1);
	}
	std::string s1(argv[2]);
	std::size_t len = s1.length();
	std::string line;
	std::size_t start;
	while (std::getline(src_file, line))
	{
		start = line.find(s1);
		line.erase(start, len);
		std::cout << line << std::endl;
	}
	src_file.close();
	return (0);
}
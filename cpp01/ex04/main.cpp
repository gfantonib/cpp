/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:21:45 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/19 17:20:41 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "wrong argument count!\nusage: ./executable filename s1 s2" << std::endl;
		return (1);
	}
	std::ifstream src_file(argv[1]);
	std::string out_filename(argv[1]);
	out_filename = out_filename + ".replace";
	std::ofstream out_file(out_filename.c_str());
	if (!src_file.is_open())
	{
		std::cout << "src_file could not be opened!" << std::endl;
		src_file.close();
		out_file.close();
		return (1);
	}
	if (src_file.peek() == std::ifstream::traits_type::eof())
	{
		std::cout << "empty file! aborting..." << std::endl;
		return (1);
	}
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	std::size_t s1_len = s1.length();
	std::string line;
	std::size_t start;
	while (std::getline(src_file, line))
	{
		start = line.find(s1);
		if (start == std::string::npos)
			continue;
		line.erase(start, s1_len);
		line.insert(start, s2);
		out_file << line << std::endl;
	}
	src_file.close();
	out_file.close();
	return (0);
}
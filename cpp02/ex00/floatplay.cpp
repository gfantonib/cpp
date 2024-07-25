/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floatplay.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:17:00 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/25 16:50:49 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <bitset>
#include <cstring> // For memcpy
#include <cstdint>

std::bitset<32> printBinary(float num)
{
    uint32_t binaryInt;
    
    // Copy the bits of the float into an integer
    std::memcpy(&binaryInt, &num, sizeof(float));
    
    // Convert the integer to binary representation
    std::bitset<32> binary(binaryInt);
    
    // std::cout << binary << std::endl; // Print the binary value
	return binary;
}

int main ( void )
{
	float fa = 2.0/1000000000000000.0;
	float fb = 3.0/1000000000000000.0;

	std::cout << std::endl << "fa: " << fa << " | " <<  printBinary(fa) <<std::endl;
	std::cout << "fb: " << fb << " | " <<  printBinary(fb) << std::endl;
	std::cout << "fb - fa = " << fb - fa << std::endl;

	if (fa == fb)
		std::cout << "fa == fb" << std::endl;
	else
		std::cout << "fa != fb" << std::endl;
	
	std::cout << "\n---------------------\n\n";
	
	float fc = 3.0;
	float fd = 3.0000001;

	std::cout << "fc: " << fc << " | " <<  printBinary(fc) << std::endl;
	std::cout << "fd: " << fd << " | " <<  printBinary(fd) << std::endl;
	std::cout << "fd - fc = " << 0.00000001 << std::endl;

	if (fc == fd)
		std::cout << "fc == fd" << std::endl;
	else
		std::cout << "fc != fd" << std::endl;
	std::cout << std::endl;

	std::cout << "---------------------\n\n";

	std::cout << "1e-15 < 1e-8" << std::endl << std::endl;
	return 0;
}
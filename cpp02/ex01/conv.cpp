/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:21:45 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/26 18:09:34 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <bitset>
#include <cstring> // For std::memcpy
#include <stdint.h> // For uint32_t

std::bitset<32> floatToBinary(float num)
{
    uint32_t binaryInt;
    
    std::memcpy(&binaryInt, &num, sizeof(float));
    
    std::bitset<32> binary(binaryInt);
    
    return binary;
}

std::bitset<32> intToBinary(int num)
{
    std::bitset<32> binaryInt;
    
    std::memcpy(&binaryInt, &num, sizeof(int));
    
    std::bitset<32> binary(binaryInt);
    
    return binary;
}

std::bitset<32> floatToFixed(float num)
{
	uint32_t binaryInt;
    
    std::memcpy(&binaryInt, &num, sizeof(float));
    
    std::bitset<32> binary(binaryInt);

	if (binary.test(29))
		std::cout << "ok" << std::endl;
    
    return binary;
	
}


int main(void) 
{
    float float_nbr = 3.14f;
    std::bitset<32> float_nbr_bin = floatToBinary(float_nbr);    
    std::cout << float_nbr_bin << std::endl;

	std::bitset<32> fixed_point_nbr = floatToFixed(float_nbr);
    // std::cout << fixed_point_nbr << std::endl;
	
	// int int_nbr = 5;
	// std::bitset<32> int_nbr_bin = intToBinary(int_nbr);
    // std::cout << int_nbr_bin << std::endl;
	
    return 0;
}
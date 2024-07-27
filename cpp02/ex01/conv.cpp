/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:21:45 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/26 20:02:45 by gfantoni         ###   ########.fr       */
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

std::bitset<32> getMantissa(std::bitset<32>bits, int n, int m) 
{
    for (int i = n; i <= m; ++i) 
        bits.reset(i);
	return (bits);
}

std::bitset<32> floatToFixed(float num)
{
	uint32_t binaryInt;
    std::memcpy(&binaryInt, &num, sizeof(float));
    std::bitset<32> binary(binaryInt);
	
	uint32_t sign = 1;
	if(binary.test(31))
		sign *= -1;
	
	std::bitset<32> exponet_bin;
	std::bitset<32> mantissa_bin;
	
	mantissa_bin = getMantissa(binary, 23, 31);
	exponet_bin = binary >> 23;
	exponet_bin.set(8, 0);

	int exponent = exponet_bin.to_ulong() - 127;
	
    return mantissa_bin;	
}


int main(void) 
{
    float float_nbr = -3.14f;
    std::bitset<32> float_nbr_bin = floatToBinary(float_nbr);    
    std::cout << float_nbr_bin << std::endl;

	std::bitset<32> fixed_point_nbr = floatToFixed(float_nbr);
    std::cout << fixed_point_nbr << std::endl;
	
	// int int_nbr = 5;
	// std::bitset<32> int_nbr_bin = intToBinary(int_nbr);
    // std::cout << int_nbr_bin << std::endl;
	
    return 0;
}


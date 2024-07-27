/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:21:45 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/27 13:20:32 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) 
{
    Fixed a( 17 );
    std::cout << a.getRawBits() << std::endl;

    Fixed b( 17.8f );
    std::cout << b.getRawBits() << std::endl;
    std::cout << b.toFloat() << std::endl;
    std::cout << b.toInt() << std::endl;
    
    return 0;
}
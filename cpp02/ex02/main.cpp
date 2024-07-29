/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:21:45 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/29 10:51:56 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void testBigger( void );
void testSmaller( void );
void testBiggerEqual( void );
void testSmallerEqual( void );
void testEqual( void );
void testNotEqual( void );

int main(void) 
{

    testBigger();
    testSmaller();
    testBiggerEqual();
    testSmallerEqual();
    testEqual();
    testNotEqual();

    return 0;
}

void testBigger( void )
{
    std::cout << "testBigger" << std::endl;
    Fixed a;
    Fixed b;
    if ((a = 10) > (b = 9))
        std::cout << "OK" << std::endl;
    else 
        std::cout << "KO" << std::endl;
    
    if ((a = 10.1f) > (b = 9.1f))
        std::cout << "OK" << std::endl;
    else 
        std::cout << "KO" << std::endl;

    if ((a = 0.002f) > (b = 0.001f))
        std::cout << "OK" << std::endl;
    else 
        std::cout << "KO" << std::endl;

    if ((a = 5.8f) > (b = 5.5f))
        std::cout << "OK" << std::endl;
    else 
        std::cout << "KO" << std::endl;
}

void testSmaller( void )
{
    std::cout << "testSmaller" << std::endl;
    Fixed a;
    Fixed b;
    if ((a = 9) < (b = 10))
        std::cout << "OK" << std::endl;
    else 
        std::cout << "KO" << std::endl;
    
    if ((a = 0.001f) < (b = 0.002f))
        std::cout << "OK" << std::endl;
    else 
        std::cout << "KO" << std::endl;
}

void testBiggerEqual( void )
{
    std::cout << "testBiggerEqual" << std::endl;
    Fixed a;
    Fixed b;
    if ((a = 10) >= (b = 9))
        std::cout << "OK" << std::endl;
    else 
        std::cout << "KO" << std::endl;
    
    if ((a = 10.1f) >= (b = 9.1f))
        std::cout << "OK" << std::endl;
    else 
        std::cout << "KO" << std::endl;

    if ((a = 0.00000002f) >= (b = 0.00000001f))
        std::cout << "OK" << std::endl;
    else 
        std::cout << "KO" << std::endl;

    if ((a = 1) >= (b = 1))
        std::cout << "OK" << std::endl;
    else 
        std::cout << "KO" << std::endl;
}

void testSmallerEqual( void )
{
    std::cout << "testSmallerEqual" << std::endl;
    Fixed a;
    Fixed b;
    if ((a = 9) <= (b = 10))
        std::cout << "OK" << std::endl;
    else 
        std::cout << "KO" << std::endl;
    
    if ((a = 0.001f) <= (b = 0.002f))
        std::cout << "OK" << std::endl;
    else 
        std::cout << "KO" << std::endl;

    if ((a = 0.0009f) <= (b = 0.0001f))
        std::cout << "OK" << std::endl;
    else 
        std::cout << "KO" << std::endl;

    if ((a = 5) <= (b = 5))
        std::cout << "OK" << std::endl;
    else 
        std::cout << "KO" << std::endl;
}

void testEqual( void )
{
    std::cout << "testEqual" << std::endl;
    Fixed a;
    Fixed b;
    if ((a = 10) == (b = 10))
        std::cout << "OK" << std::endl;
    else 
        std::cout << "KO" << std::endl;
    
    if ((a = 0.0001f) == (b = 0.0002f))
        std::cout << "OK" << std::endl;
    else 
        std::cout << "KO" << std::endl;
}

void testNotEqual( void )
{
    std::cout << "testNotEqual" << std::endl;
    Fixed a;
    Fixed b;
    if ((a = 10) != (b = 9))
        std::cout << "OK" << std::endl;
    else 
        std::cout << "KO" << std::endl;
    
    if ((a = 5.001f) != (b = 5.002f))
        std::cout << "OK" << std::endl;
    else 
        std::cout << "KO" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:21:45 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/29 16:02:25 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void testBigger( void );
void testSmaller( void );
void testBiggerEqual( void );
void testSmallerEqual( void );
void testEqual( void );
void testNotEqual( void );
void testPlus( void );
void testMinus( void );
void testMult( void );
void testDiv( void );
void testIncrement( void );
void testDecrement( void );

float findSmallestRep( void )
{
    float smallest = 0.1;
    for (int i = 0; (1 + smallest > 1); i++)
        smallest /= 10;
    return smallest * 10;
}

int main(void) 
{
    testBigger();
    std::cout << std::endl;
    testSmaller();
    std::cout << std::endl;
    testBiggerEqual();
    std::cout << std::endl;
    testSmallerEqual();
    std::cout << std::endl;
    testEqual();
    std::cout << std::endl;
    testNotEqual();
    std::cout << std::endl;

    testPlus();
    std::cout << std::endl;
    testMinus();
    std::cout << std::endl;
    testMult();
    std::cout << std::endl;
    testDiv();
    std::cout << std::endl;

    float  smallest_representable = findSmallestRep();
    std::cout << "smallest representable = " << smallest_representable << std::endl;
    std::cout << std::endl;
    
    testIncrement();
    std::cout << std::endl;
    testDecrement();
    std::cout << std::endl;

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

void testPlus( void )
{
    std::cout << "testPlus" << std::endl;
    Fixed a;
    Fixed b;
    
    a = 10, b = 9;
    std::cout << a << " + " << b << " = " << a + b << std::endl;

    a = 5.01f, b = 5.02f;
    std::cout << a << " + " << b << " = " << a + b << std::endl;

    a = 10, b = 5.123f;
    std::cout << a << " + " << b << " = " << a + b << std::endl;
}

void testMinus( void )
{
    std::cout << "testMinus" << std::endl;
    Fixed a;
    Fixed b;
    
    a = 10, b = 9;
    std::cout << a << " - " << b << " = " << a - b << std::endl;

    a = 5.02f, b = 5.01f;
    std::cout << a << " - " << b << " = " << a - b << std::endl;

    a = 10.123f, b = 5;
    std::cout << a << " - " << b << " = " << a - b << std::endl;
}

void testMult( void )
{
    std::cout << "testMult" << std::endl;
    Fixed a;
    Fixed b;
    
    a = 10, b = 9;
    std::cout << a << " * " << b << " = " << a * b << std::endl;

    a = 5.02f, b = 5.01f;
    std::cout << a << " * " << b << " = " << a * b << std::endl;

    a = 2.5f, b = 2;
    std::cout << a << " * " << b << " = " << a * b << std::endl;
}

void testDiv( void )
{
    std::cout << "testDiv" << std::endl;
    Fixed a;
    Fixed b;
    
    a = 18, b = 9;
    std::cout << a << " / " << b << " = " << a / b << std::endl;

    a = 10, b = 3;
    std::cout << a << " / " << b << " = " << a / b << std::endl;

    a = 2.5f, b = 10;
    std::cout << a << " / " << b << " = " << a / b << std::endl;
}

void testIncrement( void )
{
    std::cout << "testIncrement" << std::endl;

    Fixed a;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
}

void testDecrement( void )
{
    std::cout << "testDecrement" << std::endl;

    Fixed a;
    std::cout << a << std::endl;
    std::cout << --a << std::endl;
    std::cout << a << std::endl;
    std::cout << a-- << std::endl;
    std::cout << a << std::endl;
}

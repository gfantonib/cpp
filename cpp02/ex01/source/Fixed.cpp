/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:26:19 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/27 13:14:47 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point_nbr = 0;
}

Fixed::Fixed( const Fixed &to_be_copied )
{
	std::cout << "Copy constructor called" << std::endl;
	
	*this = to_be_copied;
}

Fixed::Fixed( const int inbr )
{
	// This is like multiply by 256.
	//  5  x    256    =    1280.
	// 101 x 100000000 = 10100000000.
	this->fixed_point_nbr = (inbr << this->frac_bits);
}

Fixed::Fixed ( const float fnbr )
{
	// This is exacly the same as multiply by 256.
	// But I dont use bitwise directly because the float is stored in 
	// a very specific manner.
	this->fixed_point_nbr = roundf(fnbr * (1 << this->frac_bits));
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator = ( const Fixed &to_be_copied ) // c = b
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	if (this != &to_be_copied)
		this->fixed_point_nbr = to_be_copied.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const // the function is a "const member function" and promises not to change the state of the object
{
	std::cout << "getRawBits member function called" << std::endl;

	return this->fixed_point_nbr;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;

	this->fixed_point_nbr = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)this->fixed_point_nbr) / (1 << this->frac_bits);
}


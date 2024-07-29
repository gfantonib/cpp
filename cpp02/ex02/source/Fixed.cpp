/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:26:19 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/29 10:48:48 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	this->fixed_point_nbr = 0;
}

Fixed::Fixed( const Fixed &to_be_copied )
{
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
	// std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const // the function is a "const member function" and promises not to change the state of the object
{
	return this->fixed_point_nbr;
}

void Fixed::setRawBits( int const raw )
{
	this->fixed_point_nbr = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)this->fixed_point_nbr) / (1 << this->frac_bits);
}

int Fixed::toInt( void ) const
{
	return this->fixed_point_nbr >> this->frac_bits;
}

Fixed& Fixed::operator = ( const Fixed &fixed_point )
{
	if (this != &fixed_point)
		this->fixed_point_nbr = fixed_point.getRawBits();
	return *this;
}

bool Fixed::operator > ( const Fixed &right_arg )
{
	if (this->fixed_point_nbr > right_arg.fixed_point_nbr)
		return 1;
	return 0;
}

bool Fixed::operator < ( const Fixed &right_arg )
{
	if (this->fixed_point_nbr < right_arg.fixed_point_nbr)
		return 1;
	return 0;
}

bool Fixed::operator >= ( const Fixed &right_arg )
{
	if (this->fixed_point_nbr >= right_arg.fixed_point_nbr)
		return 1;
	return 0;
}

bool Fixed::operator <= ( const Fixed &right_arg )
{
	if (this->fixed_point_nbr <= right_arg.fixed_point_nbr)
		return 1;
	return 0;
}

bool Fixed::operator == ( const Fixed &right_arg )
{
	if (this->fixed_point_nbr == right_arg.fixed_point_nbr)
		return 1;
	return 0;
}

bool Fixed::operator != ( const Fixed &right_arg )
{
	if (this->fixed_point_nbr != right_arg.fixed_point_nbr)
		return 1;
	return 0;
}

std::ostream& operator<<( std::ostream& out, const Fixed &fixed_point )
{
	out << fixed_point.toFloat();

	return out;
}

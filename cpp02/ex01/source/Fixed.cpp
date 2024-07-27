/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:26:19 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/27 12:10:30 by gfantoni         ###   ########.fr       */
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

Fixed::Fixed( const int arg )
{
	this->fixed_point_nbr = (arg << this->frac_bits); 
}

Fixed& Fixed::operator = ( const Fixed &to_be_copied ) // c = b
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	if (this != &to_be_copied)
		this->fixed_point_nbr = to_be_copied.getRawBits();
	return *this;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
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

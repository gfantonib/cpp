/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:23:23 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/29 18:39:22 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
	// atributes
	int fixed_point_nbr;
	static const int frac_bits = 8;
	
	public:
	// constructors
	Fixed( void );
	Fixed( const Fixed &to_be_copied );
	Fixed ( const int inbr);
	Fixed ( const float fnbr );

	// destructor
	~Fixed( void );
	
	// member functions
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	
	// copy assignment operator
	Fixed& operator = ( const Fixed &fixed_point );
	
	// comparison operators
	bool operator > ( const Fixed &right_arg );
	bool operator < ( const Fixed &right_arg );
	bool operator >= ( const Fixed &right_arg );
	bool operator <= ( const Fixed &right_arg );
	bool operator == ( const Fixed &right_arg );
	bool operator != ( const Fixed &right_arg );
	
	// arithmetic operators
	float operator + ( const Fixed &right_arg );
	float operator - ( const Fixed &right_arg );
	float operator * ( const Fixed &right_arg );
	float operator / ( const Fixed &right_arg );
	
	// increment/decrement operators
	Fixed operator ++ ( void );
	Fixed operator ++ ( int );
	Fixed operator -- ( void );
	Fixed operator -- ( int );

	// static member functions
	static Fixed& min( Fixed& left_arg, Fixed& right_arg);
	static const Fixed& min( const Fixed& left_arg, const Fixed& right_arg);
	static Fixed& max( Fixed& left_arg, Fixed& right_arg);
	static const Fixed& max( const Fixed& left_arg, const Fixed& right_arg);
};

// insertion operator
std::ostream& operator<<( std::ostream& out, const Fixed &fixed_point );

#endif
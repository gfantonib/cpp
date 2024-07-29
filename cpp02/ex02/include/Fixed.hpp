/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:23:23 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/29 16:01:23 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
	int fixed_point_nbr;
	static const int frac_bits = 8;
	// static const float  smallest_representable = 1e-02f;
	
	public:
	Fixed( void );
	Fixed( const Fixed &to_be_copied );
	Fixed ( const int inbr);
	Fixed ( const float fnbr );
	~Fixed( void );
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	
	Fixed& operator = ( const Fixed &fixed_point );
	
	bool operator > ( const Fixed &right_arg );
	bool operator < ( const Fixed &right_arg );
	bool operator >= ( const Fixed &right_arg );
	bool operator <= ( const Fixed &right_arg );
	bool operator == ( const Fixed &right_arg );
	bool operator != ( const Fixed &right_arg );
	
	float operator + ( const Fixed &right_arg );
	float operator - ( const Fixed &right_arg );
	float operator * ( const Fixed &right_arg );
	float operator / ( const Fixed &right_arg );
	
	Fixed operator ++ ( void );
	Fixed operator ++ ( int );
	Fixed operator -- ( void );
	Fixed operator -- ( int );
};

std::ostream& operator<<( std::ostream& out, const Fixed &fixed_point );

#endif
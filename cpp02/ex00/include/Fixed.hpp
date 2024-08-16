/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:23:23 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/16 14:39:41 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
	int fixed_point_nbr;
	static const int nbr_frac_bits = 8;
	
	public:
	Fixed( void ); // default constructor
	Fixed( const Fixed &to_be_copied ); // copy constructor
	Fixed &operator = ( const Fixed &to_be_copied ); //copy assignment operator
	~Fixed( void ); //destructor

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif
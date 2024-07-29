/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:23:23 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/29 18:55:08 by gfantoni         ###   ########.fr       */
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
	Fixed( void );
	Fixed( const Fixed &to_be_copied );
	Fixed &operator = ( const Fixed &to_be_copied );
	~Fixed( void );

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif
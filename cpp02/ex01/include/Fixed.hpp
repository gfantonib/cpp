/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:23:23 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/27 12:10:45 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	private:
	int fixed_point_nbr;
	static const int frac_bits = 8;
	
	public:
	Fixed( void );
	Fixed( const Fixed &to_be_copied );
	Fixed ( const int arg );
	
	Fixed &operator = ( const Fixed &to_be_copied );
	~Fixed( void );

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:23:23 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/26 10:42:20 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
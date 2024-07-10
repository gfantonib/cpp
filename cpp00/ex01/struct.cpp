/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:24:50 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/10 10:39:41 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Date 
{
	int d, m, y;
	void init(int dd, int mm, int yy);
};

void Date::init(int dd, int mm, int yy)
{
	d = dd;
	m = mm;
	y = yy;
}

int main(void)
{
	Date today;
	today.init(16,10,1996);
	std::cout << today.d << std::endl;	
	std::cout << today.m << std::endl;	
	std::cout << today.y << std::endl;

	Date tomorrow;
	tomorrow.init(17,10,1996);
	std::cout << tomorrow.d << std::endl;	
	std::cout << tomorrow.m << std::endl;	
	std::cout << tomorrow.y << std::endl;	
}
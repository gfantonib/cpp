/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class2.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 09:37:12 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/10 14:58:11 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Date 
{
	int d, m, y;
	public:
		// Date(int dd = 0, int mm = 0, int yy = 0);
		Date(int dd = 0, int mm = 0, int yy = 0) : d(dd), m(mm), y(yy) {};
		int getDay();
		int getMonth();
		int getYear();
};

// Date::Date(int dd, int mm, int yy) : d(dd), m(mm), y(yy) {}

int	Date::getDay()
{
	return (d);
}

int	Date::getMonth()
{
	return (m);
}

int	Date::getYear()
{
	return (y);
}

int main(void)
{
	Date today{1,2,3};
	std::cout << today.getDay() << std::endl;
	std::cout << today.getMonth() << std::endl;
	std::cout << today.getYear() << std::endl;

	Date tomorrow{};
	std::cout << tomorrow.getDay() << std::endl;
	std::cout << tomorrow.getMonth() << std::endl;
	std::cout << tomorrow.getYear() << std::endl;
	return (0);
}
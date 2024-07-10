/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 09:37:12 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/10 09:59:50 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class X 
{
	private:
		int m;
	public:
		X(int i = 0): m{i} {}
		int mf(int i)
		{
			int old = m;
			m = i;
			return i;
		}
};

int user(X var, X* ptr)
{
	int x = var.mf(7);
	int y = ptr->mf(9);
	return (x);
}

int main(void)
{
	int	result;
	X var1 {7};
	result = user(var1, &var1);
	std::cout << result << std::endl;
	
	X var2;
	result = var2.mf(19);
	std::cout << result << std::endl;
}
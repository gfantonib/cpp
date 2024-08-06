/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:21:45 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/06 11:43:14 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
	Cat a;
	
	std::cout << a.getType() << std::endl;
	a.setBrain("fish");
	a.showBrain();

	Cat b;
	std::cout << b.getType() << std::endl;
	b.showBrain();
	b = a;
	std::cout << b.getType() << std::endl;
	b.showBrain();

	Cat c(a);
	std::cout << c.getType() << std::endl;
	c.showBrain();

	// Animal* animals[100];
	// for (int i = 0; i < 100; i++)
	// {
	// 	if (i < 50)
	// 		animals[i] = new Dog;
	// 	else
	// 		animals[i] = new Cat;
	// }
	// animals[1]->getType();
	// for (int i = 0; i < 100; i++)
	// 	delete animals[i];
}

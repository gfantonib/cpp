/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:21:45 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/06 10:08:41 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
	Cat a("hunter");
	Cat b("homo");
	a.setID( 12 );
	a.showID();
	std::cout << a.getType() << std::endl;

	b.showID();
	std::cout << b.getType() << std::endl;

	b = a;
	
	b.showID();
	std::cout << b.getType() << std::endl;

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

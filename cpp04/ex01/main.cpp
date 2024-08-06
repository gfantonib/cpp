/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:21:45 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/06 14:39:22 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

void subjectTest( void );
void arrayTest( void );
void copyTest( void );

int main( void )
{
	std::cout << "-----------------------" << std::endl;
	subjectTest();
	std::cout << "-----------------------" << std::endl;
	arrayTest();
	std::cout << "-----------------------" << std::endl;
	copyTest();
}

void subjectTest( void )
{
	std::cout << "subjectTest" << std::endl << std::endl; 
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j; //should not create a leak
	delete i;
}

void arrayTest( void )
{
	std::cout << "arrayTest" << std::endl << std::endl;
	Animal* animals[4];
	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			animals[i] = new Dog;
		else
			animals[i] = new Cat;
		std::cout << animals[i]->getType() << std::endl;
	}
	for (int i = 0; i < 4; i++)
		delete animals[i];
}

void copyTest( void )
{
	std::cout << "copyTest" << std::endl << std::endl;
	Cat a;
	a.setBrain("fish");
	a.showBrain();

	std::cout << std::endl;

	Cat b;
	b.showBrain();
	b = a;
	b.showBrain();

	std::cout << std::endl;

	Cat c(a);
	c.showBrain();
}
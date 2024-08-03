/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:21:45 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/03 09:43:55 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// void AnimalConstructorTest( void );
// void AnimalTest( void );
// void DogConstructorTest( void );
// void DogTest( void );
// void CatConstructorTest( void );
// void CatTest( void );

// int main( void )
// {
// 	std::cout << "-----------------------" << std::endl;
// 	AnimalConstructorTest();
// 	std::cout << "-----------------------" << std::endl;
// 	AnimalTest();
// 	std::cout << "-----------------------" << std::endl;
// 	DogConstructorTest();
// 	std::cout << "-----------------------" << std::endl;
// 	DogTest();
// 	std::cout << "-----------------------" << std::endl;
// 	CatConstructorTest();
// 	std::cout << "-----------------------" << std::endl;
// 	CatTest();
// 	std::cout << "-----------------------" << std::endl;
// }

// void AnimalConstructorTest( void )
// {
// 	std::cout << "AnimalConstructorTest:" << std::endl << std::endl;
// 	Animal a;
// 	Animal b("b");
// 	Animal c(b);
// 	Animal d;
// 	d = c;
// }

// void AnimalTest( void )
// {
// 	std::cout << "AnimalTest:" << std::endl << std::endl;
// 	Animal generic;
// 	generic.makeSound();
// }

// void DogConstructorTest( void )
// {
// 	std::cout << "DogConstructorTest:" << std::endl << std::endl;
// 	Dog a;
// 	Dog b("b");
// 	Dog c(b);
// 	Dog d;
// 	d = c;
// }

// void DogTest( void )
// {
// 	std::cout << "DogTest:" << std::endl << std::endl;
// 	Animal a;
// 	Dog b;

// 	Animal& a2 = a;
// 	Animal& b2 = b;

// 	a2.makeSound();
// 	b2.makeSound();
// }

// void CatConstructorTest( void )
// {
// 	std::cout << "CatConstructorTest:" << std::endl << std::endl;
// 	Dog a;
// 	Dog b("b");
// 	Dog c(b);
// 	Dog d;
// 	d = c;
// }

// void CatTest( void )
// {
// 	std::cout << "CatTest:" << std::endl << std::endl;
// 	Animal a;
// 	Cat b;

// 	Animal& a2 = a;
// 	Animal& b2 = b;

// 	a2.makeSound();
// 	b2.makeSound();
// }

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	// const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	meta->makeSound();
	return 0;
}
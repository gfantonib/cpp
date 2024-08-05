/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:21:45 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/05 20:12:11 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
	Cat a;
	a.setID( 12 );
	a.showID();
	
	Cat b;
	b = a;
	b.showID();
	b.setID( 21 );
	b.showID();
	a.showID();
	
	
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

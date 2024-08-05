/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:21:45 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/05 11:36:33 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
	Cat a;
	a.setIdeas("fish");
	a.showIdeas();
	
	Cat b;
	b.showIdeas();
	b = a;
	b.showIdeas();
	
	
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

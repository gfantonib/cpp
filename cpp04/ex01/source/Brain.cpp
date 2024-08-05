/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:26:19 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/05 10:11:50 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructors
Brain::Brain( void )
{
	std::cout << "Brain default constructor called" << std::endl;
}

// Brain::Brain( std::string arg )
// {
// 	std::cout << "String arg constructor called" << std::endl;
// 	this->type = arg;
// }

Brain::Brain( const Brain &to_be_copied )
{
	std::cout << "Brain copy constructor called" << std::endl;
	
	*this = to_be_copied;
}

Brain& Brain::operator = ( const Brain &to_be_copied )
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	
	if (this != &to_be_copied)
	{
		std::copy(to_be_copied.ideas, to_be_copied.ideas + 100, this->ideas);
	}
	return *this;
}

// Destructor
Brain::~Brain( void )
{
	std::cout << "Brain destructor called" << std::endl;
}

// Member functions
void Brain::setIdeas( std::string idea )
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = idea;
	}
}

void Brain::showIdeas( void )
{
	for (int i = 0; i < 100; i++)
	{
		std::cout << this->ideas[i] << "-->";
	}
	std::cout << std::endl;
}

// void Brain::makeSound( void ) const
// {
// 	std::cout << "ernst! ernst! ernst!" << std::endl;
// }

// std::string Brain::getType( void ) const
// {
// 	return this->type;
// }

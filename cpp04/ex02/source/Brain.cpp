/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:26:19 by gfantoni          #+#    #+#             */
/*   Updated: 2024/08/06 14:36:35 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Default constructor
Brain::Brain( void )
{
	std::cout << "Brain default constructor called." << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = "noIdea";
	}
}

// String constructor
Brain::Brain( std::string arg )
{
	std::cout << "Brain string constructor called." << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = arg;
	}
}

// Copy constructor
Brain::Brain( const Brain &to_be_copied )
{
	std::cout << "Brain copy constructor called." << std::endl;
	
	*this = to_be_copied;
}

// Copy assignment operator
Brain& Brain::operator = ( const Brain &to_be_copied )
{
	std::cout << "Brain copy assignment operator called." << std::endl;
	
	if (this != &to_be_copied)
	{
		std::copy(to_be_copied.ideas, to_be_copied.ideas + 100, this->ideas);
	}
	return *this;
}

// Destructor
Brain::~Brain( void )
{
	std::cout << "Brain destructor called." << std::endl;
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

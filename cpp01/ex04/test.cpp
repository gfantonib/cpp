/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:19:59 by gfantoni          #+#    #+#             */
/*   Updated: 2024/07/19 14:25:10 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

int main(void)
{
	std::string command("./executable file xxx yyy");
	int result = system(command.c_str());
	std::cout << result << std::endl;
	return (0);
}
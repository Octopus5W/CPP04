/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 20:58:57 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/07/02 21:01:59 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "default constructor Brain called." << std::endl;
}

Brain::Brain(const std::string &type)
{
	std::cout << "constructor Brain called." << std::endl;
	for (int i = 0; i < 100; ++i)
	ideas[i] = " idea " + std::to_string(i);
}

Brain::Brain(const Brain &other)
{
	std::cout << "copy constructor Brain called." << std::endl;
	for (int i = 0; i < 100; ++i)
		ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain &other)
{
	std::cout << "assignation constructor Brain called." << std::endl;
	if (this != &other)
	{
	for (int i = 0; i < 100; ++i)
	    ideas[i] = other.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "destructor Brain called." << std::endl;
}
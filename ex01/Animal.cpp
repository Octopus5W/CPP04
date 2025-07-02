/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 16:11:49 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/07/02 21:59:31 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Unknown")
{
	std::cout << "default constructor Animal called." << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type)
{
	std::cout << "copy constructor Animal called." << std::endl;
};

Animal& Animal::operator=(const Animal &other)
{
	std::cout << "assignation constructor Animal called." << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "destructor Animal called." << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animal makes a sound." << std::endl;
}

std::string Animal::getType() const
{
	return type;
}



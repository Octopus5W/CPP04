/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 09:19:01 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/07/03 20:02:58 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "default constructor Dog called." << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "copy constructor Dog called." << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "assignation constructor Dog called." << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "destructor Dog called." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog barks." << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 09:19:01 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/07/03 20:00:18 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "default constructor Dog called." << std::endl;
}

Dog::Dog(const Dog &other)
{
	std::cout << "copy constructor Dog called." << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*other.brain);
	}
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "assignation constructor Dog called." << std::endl;
	if (this != &other)
	{
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "destructor Dog called." << std::endl;
	delete this->brain;
}

void Dog::makeSound() const
{
	std::cout << "Dog barks." << std::endl;
}

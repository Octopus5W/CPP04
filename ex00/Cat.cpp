/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 16:11:57 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/07/03 20:03:02 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "default constructor Cat called." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "copy constructor Cat called." << std::endl;
};

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "assignation constructor Cat called." << std::endl;
	if (this != &other)
		*this = other;
	return *this;
}

Cat::~Cat()
{
	std::cout << "destructor Cat called." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat meows." << std::endl;
}


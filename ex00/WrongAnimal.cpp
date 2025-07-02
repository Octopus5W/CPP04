/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 16:11:49 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/06/29 13:44:36 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "default constructor WrongAnimal called." << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : type(type)
{
	std::cout << "constructor WrongAnimal called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type)
{
	std::cout << "copy constructor WrongAnimal called." << std::endl;
};

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "assignation constructor WrongAnimal called." << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "destructor WrongAnimal called." << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makes a sound." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}


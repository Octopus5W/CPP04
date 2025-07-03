/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat .cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 16:11:57 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/06/29 13:45:16 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "default constructor WrongCat called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << "copy constructor WrongCat called." << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
};

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	std::cout << "assignation constructor WrongCat called." << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "destructor WrongCat called." << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat meows." << std::endl;
}
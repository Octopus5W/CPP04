/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 16:11:49 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/07/02 22:04:56 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

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



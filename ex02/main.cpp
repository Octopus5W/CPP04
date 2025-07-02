/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 09:18:47 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/07/02 21:48:43 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *j[5];

	for (int i = 0; i < 5; ++i)
	{
		if (i < 2)
			j[i] = new Dog();
		else
			j[i] = new Cat();
	}
	
	for (int i = 0; i < 5; ++i)
	{
		j[i]->makeSound();
		delete j[i];
	}
	return 0;
}
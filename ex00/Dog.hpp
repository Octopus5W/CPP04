/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 09:18:54 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/07/02 18:59:22 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
	
	public:
	    Dog();
	    Dog(const Dog &other);
	    ~Dog();
	    Dog &operator=(const Dog &other);

	    void makeSound() const override;
};

#endif

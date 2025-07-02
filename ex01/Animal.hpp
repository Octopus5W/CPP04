/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 16:11:12 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/07/02 21:51:59 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
	    std::string type;
	
	public:
	    Animal();
	    Animal(const std::string &type);
	    Animal(const Animal &other);
	    virtual ~Animal();
	    Animal &operator=(const Animal &other);

	    virtual void makeSound() const;
	    std::string getType() const;
};

#endif
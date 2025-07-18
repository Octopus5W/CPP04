/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 16:11:12 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/07/03 20:01:54 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected:
	    std::string type;
	
	public:
	    WrongAnimal();
	    WrongAnimal(const std::string &type);
	    WrongAnimal(const WrongAnimal &other);
	    ~WrongAnimal();
	    WrongAnimal &operator=(const WrongAnimal &other);

	    void makeSound() const;
	    std::string getType() const;
};

#endif
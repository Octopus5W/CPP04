/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 16:10:52 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/07/02 20:43:22 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
	    Brain *brain;
	    
	public:
	    Cat();
	    Cat(const Cat &other);
	    ~Cat();
	    Cat &operator=(const Cat &other);

	    void makeSound() const override;
};

#endif

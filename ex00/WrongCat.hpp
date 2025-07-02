/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 16:10:52 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/07/02 19:15:21 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	
	public:
	    WrongCat();
	    WrongCat(const WrongCat &other);
	    ~WrongCat();
	    WrongCat &operator=(const WrongCat &other);

	    void makeSound() const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 16:11:12 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/07/02 20:42:51 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
	protected:
	    std::string ideas[100];
	
	public:
	    Brain();
	    Brain(const std::string &type);
	    Brain(const Brain &other);
	    ~Brain();
	    Brain &operator=(const Brain &other);
};

#endif
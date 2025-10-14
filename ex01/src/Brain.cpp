/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:11:18 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/14 20:13:31 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() 
{
	std::cout << "Default brain constructor called" << std::endl;
}

Brain::Brain(const Brain &other) : /* copy field */
{
	std::cout << "Copy brain constructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &other)
{
	std::cout << "Copy brain assignment operator called" << std::endl;
	if (this != &other)
		//copy field
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Destructor brain called" << std::endl;
}

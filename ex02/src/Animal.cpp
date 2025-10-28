/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:22:53 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/13 12:25:14 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() 
{
	std::cout << "Default Animal constructor called" << std::endl;
	this->_type = "Animal";
}

Animal::Animal(const Animal &other) 
{
	std::cout << "Copy Animal constructor called" << std::endl;
	*this = other;
}

Animal	&Animal::operator=(const Animal &other) 
{
	std::cout << "Copy assignment Animal operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

Animal::~Animal() 
{
	std::cout << "Destructor Animal called" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

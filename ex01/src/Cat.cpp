/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:22:53 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/10 16:10:19 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() 
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Copy assignment Cat operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

Cat::~Cat() 
{
	std::cout << "Destructor Cat called" << std::endl;
}

std::string	Cat::getType(void) const
{
	return (this->_type);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}

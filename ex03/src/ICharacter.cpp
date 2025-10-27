/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:17:42 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/27 17:33:16 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter() 
{
	std::cout << "Default constructor called" << std::endl;
	this->_name = "Bob";
}

ICharacter::ICharacter(const ICharacter &other)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &other)
		this->_name = other._name;
}

ICharacter	&ICharacter::operator=(const ICharacter &other) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_name = other._name;
	return (*this);
}

ICharacter::~ICharacter() 
{
	std::cout << "Destructor called" << std::endl;
}

std::string const & ICharacter::getName(void) const
{

}

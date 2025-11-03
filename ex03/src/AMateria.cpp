/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:37:36 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/28 16:29:11 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("Void")
{
	std::cout << "Default Constructor of AMateria called" << std::endl;
	this->equipped = false;
	this->stack = false;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "Parameterized Constructor of AMateria called" << std::endl;
	this->equipped = false;
	this->stack = false;
}

AMateria::AMateria(AMateria &other) : _type(other._type)
{
	std::cout << "Copy Constructor of AMateria called" << std::endl;
	this->equipped = false;
	this->stack = false;
}

AMateria::~AMateria(void)
{
	std::cout << "Deconstructor of AMateria called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		this->equipped = false;
		this->stack = false;
	}
	return (*this);
}

std::string const & AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter& target)
{
		std::cout << "No type, nothing for " << target.getName() << std::endl; 
}

void	AMateria::setEquipped(bool trueOrFalse)
{
	this->equipped = trueOrFalse;
}

bool	AMateria::getEquipped(void)
{
	return (this->equipped);
}

void	AMateria::setStack(bool trueOrFalse)
{
	this->stack = trueOrFalse;
}

bool	AMateria::getStack(void)
{
	return (this->stack);
}

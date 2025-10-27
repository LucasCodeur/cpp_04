/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:37:36 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/24 19:02:54 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("Void")
{
	std::cout << "Default Constructor of AMateria called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "Parameterized Constructor of AMateria called" << std::endl;
}

AMateria::AMateria(AMateria &other) : _type(other._type)
{
	std::cout << "Copy Constructor of AMateria called" << std::endl;
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
	}
	return (*this);
}

std::string const & AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(Icharacter& target)
{
	if (this->_type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *"; 
	else if (this->_type == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *"; 
}

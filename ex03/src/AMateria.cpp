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

AMateria::~AMateria(void)
{
	std::cout << "Deconstructor of AMateria called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria &Other)
{
	if (this != &Other)
	{
		this->_type = Other._type;
	}
}

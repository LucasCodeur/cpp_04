/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:25:28 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/24 19:17:38 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : _type("Void")
{
	std::cout << "Default Constructor of Ice called" << std::endl;
}

Ice::Ice(std::string const & type) : _type(type)
{
	std::cout << "Parameterized Constructor of Ice called" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "Deconstructor of Ice called" << std::endl;
}

Ice& Ice::operator=(const Ice &Other)
{
	if (this != &Other)
	{
		this->_type = Other._type;
	}
}

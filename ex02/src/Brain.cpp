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

Brain::Brain(const Brain &other)
{
	std::cout << "Copy brain constructor called" << std::endl;
	for (int i = 0; other.ideas[i].empty() != true; i++)
		this->ideas[i] = other.ideas[i];
}

Brain	&Brain::operator=(const Brain &other)
{
	std::cout << "Copy brain assignment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; other.ideas[i].empty() != true; i++)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Destructor brain called" << std::endl;
}

void	Brain::printIdeas(void) const
{
	for (int i = 0; ideas[i].empty() == false; i++)
	{
		std::cout << ideas[i] << std::endl;
	}
}

void	Brain::setIdea(std::string idea)
{
	int	i = 0;

	while (this->ideas[i].empty() == false)
	{
		std::cout << ideas[i] << std::endl;
		i++;
	}
	this->ideas[i] = idea;
}

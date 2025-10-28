/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Node.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:18:55 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/28 18:50:55 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Node.hpp"
#include "AMateria.hpp"

Node::Node()
{
	std::cout << "Default node constructor called" << std::endl;
	this->_ptr = NULL;
	this->_next = NULL;
}

Node::Node(const Node &other)
{
	std::cout << "Copy node constructor called" << std::endl;
	if (this != &other)
	{
		this->_ptr = other._ptr;
		this->_next = other._next;
	}
}

Node	&Node::operator=(const Node &other)
{
	std::cout << "Copy node assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_ptr = other._ptr;
		this->_next = other._next;
	}
	return (*this);
}

Node::~Node()
{
	std::cout << "Destructor node called" << std::endl;
	// if (this->_ptr != NULL)
	// 	delete this->_ptr;
}

void	Node::setPtr(AMateria* new_ptr)
{
	if (new_ptr != NULL)
		this->_ptr = new_ptr;
}

void	Node::setNext(Node* newNode)
{
	if (newNode != NULL)
		this->_next = newNode;
}

AMateria*	Node::getPtr(void)
{
	return (this->_ptr);
}

Node*	Node::getNext(void)
{
	return (this->_next);
}

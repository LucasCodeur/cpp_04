/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedList.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:09:29 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/28 18:49:39 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LinkedList.hpp"

LinkedList::LinkedList()
{
	std::cout << "Default LinkedList constructor called" << std::endl;
	this->_head = NULL;
}

LinkedList::LinkedList(const LinkedList &other)
{
	std::cout << "Copy LinkedList constructor called" << std::endl;
	if (this != &other)
		this->_head = other._head;
}

LinkedList	&LinkedList::operator=(const LinkedList &other)
{
	std::cout << "Copy LinkedList assignment operator called" << std::endl;
	if (this != &other)
		this->_head = other._head;
	return (*this);
}

LinkedList::~LinkedList()
{
	std::cout << "Destructor LinkedList called" << std::endl;
	if (_head == NULL)
		return ;
	Node*	temp = this->_head->getNext();
	if (temp == NULL)
	{
		if (this->_head)
		{
			if (this->_head->getPtr()->getStack() == false)
				delete (this->_head->getPtr());

		}
	}
	while (temp != this->_head && temp != NULL)
	{
		std::cout << "[DESTRUCTOR LINKED LIST] main while\n";
		Node*	temp2 = temp;
		if (temp2 == NULL)
			break ;
		std::cout << "[DESTRUCTOR LINKED LIST] after temp2 == NULL\n";
		temp = temp->getNext();
		if (temp2->getPtr()->getStack() == false)
			delete (temp2->getPtr());
		delete temp2;
	}
	delete this->_head->getPtr();
	delete this->_head;
}

void	LinkedList::add(AMateria* ptr)
{
	if (ptr == NULL)
		return ;
	Node*	newNode = new Node();
	newNode->setPtr(ptr);
	std::cout << "[ADD] ptr node :" << this->_head << std::endl;
	// std::cout << "[ADD] ptr materia :" << this->_head->getPtr() << std::endl;
	if (this->_head == NULL)
	{
		std::cout << "[ADD] inside the if head = NULL\n";
		this->_head = newNode;
		std::cout << "[ADD] ptr node :" << this->_head << std::endl;
		std::cout << "[ADD] ptr materia :" << ptr << std::endl;
	}
	else
	{
		std::cout << "[ADD] inside the else head != NULL\n";
		Node*	temp = this->_head;
		while (temp->getNext() != NULL)
		{
			std::cout << "[ADD] ptr node :" << this->_head << std::endl;
			std::cout << "[ADD] ptr materia :" << temp->getPtr() << std::endl;
			temp = temp->getNext();
		}
		temp->setNext(newNode);
	}
}

// void	LinkedList::remove(AMateria* ptr)
// {
// 	if (ptr == NULL)
// 		return ;
//
// 	Node*	temp = this->_head;
// 	if (temp == NULL)
// 		return ;
//
// 	Node*	temp1 = NULL;
//
// 	while (temp != NULL && temp->getPtr() != ptr)
// 	{
// 		temp1 = temp;
// 		temp = temp->getNext();
// 	}
// 	if (temp1 != NULL && temp != NULL)
// 		temp1->setNext(temp->getNext());
// 	else
// 	{
// 		if (this->_head != NULL)
// 		{
// 			std::cout << "INSIDE THIS IF REMOVE FIFFERENT NULL\n";
// 			// delete this->_head;
// 			this->_head = NULL;
// 		}
// 	}
//
// }


void LinkedList::remove(AMateria* ptr)
{
	if (!ptr || !_head)
		return;

	Node* curr = _head;
	Node* prev = NULL;

	while (curr && curr->getPtr() != ptr)
	{
		std::cout << "[REMOVE] Inside main while\n";
		std::cout << "[REMOVE] : " << curr << std::endl;
		prev = curr;
		curr = curr->getNext();
	}

	std::cout << "[REMOVE] : " << curr << std::endl;
	if (!curr)
	{
		std::cout << "[REMOVE] : return\n";
		return;
	}
	if (prev)
		prev->setNext(curr->getNext());
	else
		_head = curr->getNext(); 
	delete curr;
	curr = NULL;
}

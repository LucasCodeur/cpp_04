/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Node.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:20:04 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/28 17:48:57 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NODE_HPP
# define NODE_HPP

#include <iostream>
#include "AMateria.hpp"

class Node
{
	public:
		Node();
		~Node();
		Node(const Node &other);
		Node &operator=(const Node &other);

		void		setPtr(AMateria* newPtr);
		void		setNext(Node* newNode);
		AMateria*	getPtr(void);
		Node*		getNext(void);
	private:
		AMateria*	_ptr;
		Node*		_next;

};
#endif

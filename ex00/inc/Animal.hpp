/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:22:54 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/10 16:09:46 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal 
{
	public:
		Animal();								//Default constructor
		~Animal();								//Destructor
		Animal(const Animal &other);			//Copy constructor
		Animal &operator=(const Animal &other);	//Copy operator

		std::string	getType(void) const;
		void	makeSound(void) const;
	protected:
		std::string _type;

};
#endif

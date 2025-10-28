/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:22:54 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/13 12:36:29 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal 
{
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);

		std::string	getType(void) const;
		virtual void	makeSound(void)const = 0;
	protected:
		std::string _type;

};
#endif

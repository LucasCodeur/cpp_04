/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:22:54 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/14 20:17:02 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();								//Default constructor
		~Cat();								//Destructor
		Cat(const Cat &other);				//Copy constructor
		Cat &operator=(const Cat &other);	//Copy operator

		std::string	getType(void) const;
		void	makeSound(void) const;
	private:
		Brain* _Brain;
};

#endif

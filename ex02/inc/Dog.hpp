/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:22:54 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/14 20:17:14 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);

		std::string	getType(void) const;
		void		makeSound(void) const;
		void		printBrainIdeas(void) const;
		void		setIdeas(std::string idea);
	private:
		Brain* _Brain;
};
#endif

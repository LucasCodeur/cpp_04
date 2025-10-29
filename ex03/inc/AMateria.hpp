/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:16:36 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/27 17:15:27 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>

#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	_type;
		bool		equipped;
		bool		malloc;
	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria &other);
		virtual ~AMateria(void);
		AMateria& operator=(const AMateria &Other);
		std::string const & getType() const;

		virtual void	setEquipped(bool trueOrFalse);
		virtual bool	getEquipped(void);
		virtual void	setMalloc(bool trueOrFalse);
		virtual bool	getMalloc(void);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif

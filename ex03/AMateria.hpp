/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 10:40:29 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/07 10:45:57 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class	AMateria {

protected:

	std::string	_type;

public:

	AMateria( std::string const& type );
	~AMateria();

	std::string const&	getType() const;
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);

};

#endif

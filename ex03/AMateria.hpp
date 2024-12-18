/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 10:40:29 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/08 11:33:35 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "colors.hpp"
# include "ICharacter.hpp"

/*-------------------------*/
/*  Define AMateria class  */
/*-------------------------*/
class	AMateria {

protected:

	std::string const	_type;

public:

	AMateria( std::string const& type );
	AMateria( const AMateria& other );
	AMateria&	operator=( const AMateria& other );
	virtual ~AMateria( void );

	std::string const&	getType( void ) const;
	virtual AMateria*	clone( void ) const = 0;
	virtual void		use( ICharacter& target );

};

#endif

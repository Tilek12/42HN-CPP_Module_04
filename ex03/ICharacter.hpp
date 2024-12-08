/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:26:41 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/08 11:26:48 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <string>

/*--------------------------*/
/*  Include AMateria class  */
/*--------------------------*/
class	AMateria;

/*-------------------------------*/
/*  Define ICharacter interface  */
/*-------------------------------*/
class	ICharacter {

public:

	virtual						~ICharacter( void ) {}
	virtual std::string const&	getName( void ) const = 0;
	virtual AMateria*			getMateria(int idx) const = 0;
	virtual void				equip( AMateria* m ) = 0;
	virtual void				unequip( int idx ) = 0;
	virtual void				use( int idx, ICharacter& target ) = 0;

};

#endif

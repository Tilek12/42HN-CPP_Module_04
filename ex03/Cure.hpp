/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:29:18 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/08 11:22:47 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

/*---------------------*/
/*  Define Cure class  */
/*---------------------*/
class	Cure : public AMateria {

public:

	Cure( void );
	Cure( const Cure& other );
	Cure&	operator=( const Cure& other );
	~Cure( void );

	AMateria*	clone( void ) const override;
	void		use( ICharacter& target ) override;

};

#endif

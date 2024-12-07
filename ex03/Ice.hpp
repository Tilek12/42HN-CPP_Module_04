/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:14:02 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/07 11:19:46 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class	Ice : public AMateria {

public:

	Ice( void );
	Ice( const Ice& other );
	Ice&	operator=( const Ice& other );
	~Ice( void );

	AMateria*	clone( void ) const override;
	// void		use( ICharacter& target );

};

#endif

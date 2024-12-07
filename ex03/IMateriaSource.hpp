/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:11:37 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/07 14:13:35 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class	IMateriaSource {

	public:

	virtual				~IMateriaSource( void ) {}
	virtual void		learnMateria( AMateria* ) = 0;
	virtual AMateria*	createMateria( std::string const & type ) = 0;

};

#endif

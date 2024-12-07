/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:15:41 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/07 14:26:56 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource {

private:

	AMateria*	_memory[4];
	void		_clearMemory( void );
	void		_copyMemory( const MateriaSource& other );

public:

	MateriaSource( void );
	MateriaSource( const MateriaSource& other );
	MateriaSource&	operator=( const MateriaSource& other );
	~MateriaSource( void );

	void	learnMateria( AMateria* m ) override;
	AMateria* createMateria( std::string const& type ) override;

};

#endif

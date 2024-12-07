/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:28:29 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/07 14:52:06 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {

	for ( int i = 0; i < 4; i++ ) {
		_memory[i] = nullptr;
	}
}

MateriaSource::MateriaSource( const MateriaSource& other ) {

	for ( int i = 0; i < 4; i++ ) {
		_memory[i] = nullptr;
	}

	_copyMemory( other );
}

MateriaSource&	MateriaSource::operator=( const MateriaSource& other ) {

	if ( this != &other ) {
		_clearMemory();
		_copyMemory( other );
	}

	return *this;
}

MateriaSource::~MateriaSource ( void ) {
	_clearMemory();
}

void	MateriaSource::_clearMemory( void ) {

	for ( int i = 0; i < 4; i++ ) {
		delete _memory[i];
		_memory[i] = nullptr;
	}
}

void	MateriaSource::_copyMemory( const MateriaSource& other ) {

	for ( int i = 0; i < 4; i++ ) {
		if ( other._memory[i] )
			_memory[i] = other._memory[i]->clone();
		else
			_memory[i] = nullptr;
	}
}

void	MateriaSource::learnMateria( AMateria* m ) {

	for ( int i = 0; i < 4; i++ ) {
		if ( !_memory[i] ) {
			_memory[i] = m;
			break;
		}
	}
}

AMateria*	MateriaSource::createMateria( std::string const& type ) {

	for ( int i = 0; i < 4; i++ ) {
		if ( _memory[i] && _memory[i]->getType() == type )
			return _memory[i]->clone();
	}

	return nullptr;
}

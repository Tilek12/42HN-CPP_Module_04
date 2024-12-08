/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:28:29 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/08 21:01:57 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*-----------------------------------*/
/*  MateriaSource Class constructor  */
/*-----------------------------------*/
MateriaSource::MateriaSource( void ) {

	for ( int i = 0; i < 4; i++ ) {
		_materias[i] = nullptr;
	}
}

/*----------------------------------------*/
/*  MateriaSource Class copy constructor  */
/*----------------------------------------*/
MateriaSource::MateriaSource( const MateriaSource& other ) {

	for ( int i = 0; i < 4; i++ ) {
		_materias[i] = nullptr;
	}

	_copyMateria( other );
}

/*------------------------------------------------*/
/*  MateriaSource Class copy assignment operator  */
/*------------------------------------------------*/
MateriaSource&	MateriaSource::operator=( const MateriaSource& other ) {

	if ( this != &other ) {
		_clearMateria();
		_copyMateria( other );
	}

	return *this;
}

/*----------------------------------*/
/*  MateriaSource Class destructor  */
/*----------------------------------*/
MateriaSource::~MateriaSource ( void ) {
	_clearMateria();
}

/*---------------------------------*/
/*  Define _clearMateria function  */
/*---------------------------------*/
void	MateriaSource::_clearMateria( void ) {

	for ( int i = 0; i < 4; i++ ) {
		delete _materias[i];
		_materias[i] = nullptr;
	}
}

/*--------------------------------*/
/*  Define _copyMateria function  */
/*--------------------------------*/
void	MateriaSource::_copyMateria( const MateriaSource& other ) {

	for ( int i = 0; i < 4; i++ ) {
		if ( other._materias[i] )
			_materias[i] = other._materias[i]->clone();
		else
			_materias[i] = nullptr;
	}
}

/*--------------------------------*/
/*  Define learnMateria function  */
/*--------------------------------*/
void	MateriaSource::learnMateria( AMateria* m ) {

	if ( !m ) {
		std::cout << RED
				  << "Invalid Materia. Ignored.\n"
				  << RESET;
		return;
	}

	for ( int i = 0; i < 4; i++ ) {
		if ( !_materias[i] ) {
			_materias[i] = m;
			std::cout << CYAN
					  << "Learned Materia: " << m->getType()
					  << RESET << std::endl;
			return;
		}
	}

	std::cout << RED
			  << "No room to learn more Materias!\n"
			  << RESET;
}

/*---------------------------------*/
/*  Define createMateria function  */
/*---------------------------------*/
AMateria*	MateriaSource::createMateria( std::string const& type ) {

	for ( int i = 0; i < 4; i++ ) {
		if ( _materias[i] && _materias[i]->getType() == type ) {
			std::cout << GREEN
					  << "Created Materia: " << type
					  << RESET << std::endl;
			return _materias[i]->clone();
		}
	}

	std::cout << RED
			  << "Attempted to create unknown materia: Returned nullptr.\n"
			  << RESET;

	return nullptr;
}

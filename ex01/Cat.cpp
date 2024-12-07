/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:19:16 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/07 09:10:09 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*-------------------------*/
/*  Cat Class constructor  */
/*-------------------------*/
Cat::Cat( void ) : Animal(), _brain( new Brain() ) {

	_type = "Cat";
	print( "Cat class Constructor called.", CYAN );
}

/*------------------------------*/
/*  Cat Class copy constructor  */
/*------------------------------*/
Cat::Cat( const Cat& other ) : Animal( other ),
							   _brain( new Brain( *other._brain) ) {
	print( "Cat class Copy Constructor called.", CYAN );
}

/*--------------------------------------*/
/*  Cat Class copy assignment operator  */
/*--------------------------------------*/
Cat&	Cat::operator=( const Cat& other ) {

	if ( this != &other ) {
		Animal::operator=( other );
		if ( _brain ) {
			delete _brain;
		}
		_brain = new Brain( *other._brain );
		print( "Cat class Copy Assignment operator called.", CYAN );
	}

	return *this;
}

/*------------------------*/
/*  Cat Class destructor  */
/*------------------------*/
Cat::~Cat( void ) {
	delete _brain;
	print( "Cat class Destructor called.", CYAN );
}

/*-------------------------------*/
/*  Override makeSound function  */
/*-------------------------------*/
void	Cat::makeSound( void ) const {
	print( "Meow!", B_CYAN );
}

/*---------------------------*/
/*  Define setIdea function  */
/*---------------------------*/
void	Cat::setIdea( int index, const std::string& idea ) {
	_brain->setIdea( index, idea );
}

/*---------------------------*/
/*  Define getIdea function  */
/*---------------------------*/
std::string	Cat::getIdea( int index ) const {
	return _brain->getIdea( index );
}

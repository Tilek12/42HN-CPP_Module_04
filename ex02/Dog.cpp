/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:02:49 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/07 08:56:38 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*-------------------------*/
/*  Dog Class constructor  */
/*-------------------------*/
Dog::Dog( void ) : AAnimal(), _brain( new Brain() ) {

	_type = "Dog";
	print( "Dog class Constructor called.", GREEN );
}

/*------------------------------*/
/*  Dog Class copy constructor  */
/*------------------------------*/
Dog::Dog( const Dog& other ) : AAnimal( other ),
							   _brain( new Brain( *other._brain )) {
	print( "Dog class Copy Constructor called.", GREEN );
}

/*--------------------------------------*/
/*  Dog Class copy assignment operator  */
/*--------------------------------------*/
Dog&	Dog::operator=( const Dog& other ) {

	if ( this != &other ) {
		AAnimal::operator=( other );
		if ( _brain ) {
			delete _brain;
		}
		_brain = new Brain( *other._brain );
		print( "Dog class Copy Assignment operator called.", GREEN );
	}

	return *this;
}

/*------------------------*/
/*  Dog Class destructor  */
/*------------------------*/
Dog::~Dog( void ) {
	delete _brain;
	print( "Dog class Destructor called.", GREEN );
}

/*-------------------------------*/
/*  Override makeSound function  */
/*-------------------------------*/
void	Dog::makeSound( void ) const {
	print( "Woof!", B_GREEN );
}

/*---------------------------*/
/*  Define setIdea function  */
/*---------------------------*/
void	Dog::setIdea( int index, const std::string& idea ) {
	_brain->setIdea( index, idea );
}

/*---------------------------*/
/*  Define getIdea function  */
/*---------------------------*/
std::string	Dog::getIdea( int index ) const {
	return _brain->getIdea( index );
}

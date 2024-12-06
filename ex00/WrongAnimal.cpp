/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:02:08 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/06 19:10:46 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*---------------------------------*/
/*  WrongAnimal Class constructor  */
/*---------------------------------*/
WrongAnimal::WrongAnimal( void ) : _type( "WrongAnimal" ) {
	print( "WrongAnimal class Constructor called.", RED );
}

/*--------------------------------------*/
/*  WrongAnimal Class copy constructor  */
/*--------------------------------------*/
WrongAnimal::WrongAnimal( const WrongAnimal& other ) : _type( other._type ) {
	print( "WrongAnimal class Copy Constructor called.", RED );
}

/*----------------------------------------------*/
/*  WrongAnimal Class copy assignment operator  */
/*----------------------------------------------*/
WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& other ) {

	if ( this != &other ) {
		_type = other._type;
		print( "WrongAnimal class Copy Assignment operator called.", RED );
	}

	return *this;
}

/*--------------------------------*/
/*  WrongAnimal Class destructor  */
/*--------------------------------*/
WrongAnimal::~WrongAnimal( void ) {
	print( "WrongAnimal class Destructor called.", RED );
}

/*---------------------------*/
/*  Define getType function  */
/*---------------------------*/
std::string	WrongAnimal::getType( void ) const {
	return _type;
}

/*-----------------------------*/
/*  Define makeSound function  */
/*-----------------------------*/
void	WrongAnimal::makeSound( void ) const {
	print( "* Weird sound from WrongAnimal... *", B_RED );
}

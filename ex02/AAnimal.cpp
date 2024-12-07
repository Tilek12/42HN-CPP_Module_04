/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:41:06 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/07 08:42:45 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/*-----------------------------*/
/*  AAnimal Class constructor  */
/*-----------------------------*/
AAnimal::AAnimal( void ) : _type( "Animal" ) {
	print( "AAnimal class Constructor called.", YELLOW );
}

/*----------------------------------*/
/*  AAnimal Class copy constructor  */
/*----------------------------------*/
AAnimal::AAnimal( const AAnimal& other ) : _type( other._type ) {
	print( "AAnimal class Copy Constructor called.", YELLOW );
}

/*------------------------------------------*/
/*  AAnimal Class copy assignment operator  */
/*------------------------------------------*/
AAnimal&	AAnimal::operator=( const AAnimal& other ) {

	if ( this != &other ) {
		_type = other._type;
		print( "AAnimal class Copy Assignment operator called.", YELLOW );
	}

	return *this;
}

/*----------------------------*/
/*  AAnimal Class destructor  */
/*----------------------------*/
AAnimal::~AAnimal( void ) {
	print( "AAnimal class Destructor called.", YELLOW );
}

/*---------------------------*/
/*  Define getType function  */
/*---------------------------*/
std::string	AAnimal::getType( void ) const {
	return _type;
}

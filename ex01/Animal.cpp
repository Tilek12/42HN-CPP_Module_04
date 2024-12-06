/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:41:06 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/06 19:02:47 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*----------------------------*/
/*  Animal Class constructor  */
/*----------------------------*/
Animal::Animal( void ) : _type( "Animal" ) {
	print( "Animal class Constructor called.", YELLOW );
}

/*---------------------------------*/
/*  Animal Class copy constructor  */
/*---------------------------------*/
Animal::Animal( const Animal& other ) : _type( other._type ) {
	print( "Animal class Copy Constructor called.", YELLOW );
}

/*-----------------------------------------*/
/*  Animal Class copy assignment operator  */
/*-----------------------------------------*/
Animal&	Animal::operator=( const Animal& other ) {

	if ( this != &other ) {
		_type = other._type;
		print( "Animal class Copy Assignment operator called.", YELLOW );
	}

	return *this;
}

/*---------------------------*/
/*  Animal Class destructor  */
/*---------------------------*/
Animal::~Animal( void ) {
	print( "Animal class Destructor called.", YELLOW );
}

/*---------------------------*/
/*  Define getType function  */
/*---------------------------*/
std::string	Animal::getType( void ) const {
	return _type;
}

/*-----------------------------*/
/*  Define makeSound function  */
/*-----------------------------*/
void	Animal::makeSound( void ) const {
	print( "* Some sound from Animal *", YELLOW );
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:12:22 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/06 16:09:10 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*------------------------------*/
/*  WrongCat Class constructor  */
/*------------------------------*/
WrongCat::WrongCat( void ) {

	_type = "WrongCat";
	print( "WrongCat class Constructor called.", PURPLE );
}

/*-----------------------------------*/
/*  WrongCat Class copy constructor  */
/*-----------------------------------*/
WrongCat::WrongCat( const WrongCat& other ) : WrongAnimal( other ) {
	print( "WrongCat class Copy Constructor called.", PURPLE );
}

/*-------------------------------------------*/
/*  WrongCat Class copy assignment operator  */
/*-------------------------------------------*/
WrongCat&	WrongCat::operator=( const WrongCat& other ) {

	if ( this != &other ) {
		WrongAnimal::operator=( other );
		print( "WrongCat class Copy Assignment operator called.", PURPLE );
	}

	return *this;
}

/*-----------------------------*/
/*  WrongCat Class destructor  */
/*-----------------------------*/
WrongCat::~WrongCat( void ) {
	print( "WrongCat class Destructor called.", PURPLE );
}

/*-------------------------------*/
/*  Override makeSound function  */
/*-------------------------------*/
void	WrongCat::makeSound( void ) const {
	print( "* Undefined sound from WrongCat... *", B_PURPLE );
}

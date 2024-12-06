/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:02:49 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/06 16:09:05 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*-------------------------*/
/*  Dog Class constructor  */
/*-------------------------*/
Dog::Dog( void ) {

	_type = "Dog";
	print( "Dog class Constructor called.", GREEN );
}

/*------------------------------*/
/*  Dog Class copy constructor  */
/*------------------------------*/
Dog::Dog( const Dog& other ) : Animal( other ) {
	print( "Dog class Copy Constructor called.", GREEN );
}

/*--------------------------------------*/
/*  Dog Class copy assignment operator  */
/*--------------------------------------*/
Dog&	Dog::operator=( const Dog& other ) {

	if ( this != &other ) {
		Animal::operator=( other );
		print( "Dog class Copy Assignment operator called.", GREEN );
	}

	return *this;
}

/*------------------------*/
/*  Dog Class destructor  */
/*------------------------*/
Dog::~Dog( void ) {
	print( "Dog class Destructor called.", GREEN );
}

/*-------------------------------*/
/*  Override makeSound function  */
/*-------------------------------*/
void	Dog::makeSound( void ) const {
	print( "Woof!", B_GREEN );
}

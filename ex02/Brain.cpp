/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 15:39:12 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/06 19:05:54 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*---------------------------*/
/*  Brain Class constructor  */
/*---------------------------*/
Brain::Brain( void ) {

	for ( int i = 0; i < 100; i++ ) {
		_ideas[i] = "some idea";
	}

	print( "Brain class Constructor called.", PURPLE );
}

/*--------------------------------*/
/*  Brain Class copy constructor  */
/*--------------------------------*/
Brain::Brain( const Brain& other ) {

	for ( int i = 0; i < 100; i++ ) {
		_ideas[i] = other._ideas[i];
	}

	print( "Brain class Copy Constructor called.", PURPLE );
}

/*----------------------------------------*/
/*  Brain Class copy assignment operator  */
/*----------------------------------------*/
Brain&	Brain::operator=( const Brain& other ) {

	if ( this != &other ) {
		for ( int i = 0; i < 100; i++ ) {
			_ideas[i] = other._ideas[i];
		}
		print( "Brain class Copy Assignment operator called.", PURPLE );
	}

	return *this;
}

/*--------------------------*/
/*  Brain Class destructor  */
/*--------------------------*/
Brain::~Brain( void ) {
	print( "Brain class Destructor called.", PURPLE );
}

/*---------------------------*/
/*  Define setIdea function  */
/*---------------------------*/
void	Brain::setIdea( int index, const std::string& idea ) {

	if ( index >= 0 && index < 100 ) {
		_ideas[index] = idea;
	}
}

/*---------------------------*/
/*  Define getIdea function  */
/*---------------------------*/
std::string	Brain::getIdea( int index ) const {

	if ( index >= 0 && index < 100 ) {
		return _ideas[index];
	}

	return "Incorrect index";
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 15:39:12 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/06 16:20:52 by tkubanyc         ###   ########.fr       */
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

	std::cout << "Brain class Constructor called.\n";
}

/*--------------------------------*/
/*  Brain Class copy constructor  */
/*--------------------------------*/
Brain::Brain( const Brain& other ) {

	for ( int i = 0; i < 100; i++ ) {
		_ideas[i] = other._ideas[i];
	}

	std::cout << "Brain class Copy Constructor called.\n";
}

/*----------------------------------------*/
/*  Brain Class copy assignment operator  */
/*----------------------------------------*/
Brain&	Brain::operator=( const Brain& other ) {

	if ( this != &other ) {
		for ( int i = 0; i < 100; i++ ) {
			_ideas[i] = other._ideas[i];
		}
		std::cout << "Brain class Copy Assignment operator called.\n";
	}

	return *this;
}

/*--------------------------*/
/*  Brain Class destructor  */
/*--------------------------*/
Brain::~Brain( void ) {
	std::cout << "Brain class Destructor called.\n";
}

/*---------------------------*/
/*  Define setIdea function  */
/*---------------------------*/
void	Brain::setIdea( int index, const std::string& idea ) {

	if ( 0 <= index < 100 ) {
		_ideas[index] = idea;
	}
}

/*---------------------------*/
/*  Define getIdea function  */
/*---------------------------*/
std::string	Brain::getIdea( int index ) const {

	if ( 0 <= index < 100 ) {
		return _ideas[index];
	}

	return "Incorrect index";
}

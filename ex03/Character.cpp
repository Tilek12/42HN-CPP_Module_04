/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:42:11 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/08 21:00:48 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*-------------------------------*/
/*  Character Class constructor  */
/*-------------------------------*/
Character::Character( const std::string& name ) : _name( name ) {

	for ( int i = 0; i < 4; i++ ) {
		_inventory[i] = nullptr;
	}
}

/*------------------------------------*/
/*  Character Class copy constructor  */
/*------------------------------------*/
Character::Character( const Character& other ) : _name( other._name ) {

	for ( int i = 0; i < 4; i++ ) {
		_inventory[i] = nullptr;
	}

	_copyInventory( other );
}

/*--------------------------------------------*/
/*  Character Class copy assignment operator  */
/*--------------------------------------------*/
Character&	Character::operator=( const Character& other ) {

	if ( this != &other ) {
		_name = other._name;
		_clearInventory();
		_copyInventory( other );
	}

	return *this;
}

/*------------------------------*/
/*  Character Class destructor  */
/*------------------------------*/
Character::~Character( void ) {
	_clearInventory();
}

/*-----------------------------------*/
/*  Define _clearInventory function  */
/*-----------------------------------*/
void	Character::_clearInventory( void ) {

	for ( int i = 0; i < 4; i++ ) {
		delete _inventory[i];
		_inventory[i] = nullptr;
	}
}

/*----------------------------------*/
/*  Define _copyInventory function  */
/*----------------------------------*/
void	Character::_copyInventory( const Character& other ) {

	for ( int i = 0; i < 4; i++ ) {
		if ( other._inventory[i] )
			_inventory[i] = other._inventory[i]->clone();
		else
			_inventory[i] = nullptr;
	}
}

/*---------------------------*/
/*  Define getName function  */
/*---------------------------*/
const std::string&	Character::getName( void ) const {
	return _name;
}

/*------------------------------*/
/*  Define getMateria function  */
/*------------------------------*/
AMateria*	Character::getMateria(int idx) const {
	if (idx >= 0 && idx < 4 && _inventory[idx] ) {
		return _inventory[idx];
	}
	return nullptr;
}

/*-------------------------*/
/*  Define equip function  */
/*-------------------------*/
void	Character::equip( AMateria* m ) {

	if (!m) {
		std::cout << RED
				  << "Cannot equip: Materia is null!\n"
				  << RESET;
		return;
	}

	for ( int i = 0; i < 4; i++ ) {
		if ( !_inventory[i]) {
			_inventory[i] = m;
			std::cout << BLUE
					  << "Equipped Materia: " << m->getType()
					  << RESET << std::endl;
			return;
		}
	}

	std::cout << RED
			  << "Cannot equip: Inventory is full!\n"
			  << RESET;
}

/*---------------------------*/
/*  Define unequip function  */
/*---------------------------*/
void	Character::unequip( int idx ) {

	if (idx < 0 || idx >= 4) {
		std::cout << RED
				  << "Cannot unequip: Index " << idx << " is out of range!\n"
				  << RESET;
		return;
	}

	if (!_inventory[idx]) {
		std::cout << RED
				  << "Cannot unequip: No Materia equipped in slot "
				  << idx << "!\n"
				  << RESET;
		return;
	}

	if ( idx < 4 && idx >= 0 && _inventory[idx] ) {
		std::cout << PURPLE
				  << "Unequipped Materia: " << _inventory[idx]->getType()
				  << RESET << std::endl;
		_inventory[idx] = nullptr;
	}
}

/*-----------------------*/
/*  Define use function  */
/*-----------------------*/
void	Character::use( int idx, ICharacter& target ) {

	if (idx < 0 || idx >= 4) {
		std::cout << RED
				  << "Cannot use Materia: Index " << idx << " is out of range!\n"
				  << RESET;
		return;
	}

	if (!_inventory[idx]) {
		std::cout << RED
				  << "Cannot use Materia: No Materia equipped in slot "
				  << idx << "!\n"
				  << RESET;
		return;
	}

	if ( idx < 4 && idx >= 0 && _inventory[idx] ) {
		_inventory[idx]->use(target);
	}
}

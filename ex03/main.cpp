/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:53:50 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/09 14:51:33 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

/*----------------------------------------*/
/*  Display the inventory of a Character  */
/*----------------------------------------*/
void	displayInventory( const ICharacter* character ) {

	std::cout << B_WHITE
			  << "Inventory of " << character->getName() << ":\n"
			  << RESET;

	for (  int i = 0; i < 4; ++i) {
		AMateria* materia = character->getMateria( i );
		if ( materia ) {
			std::cout << "	Slot " << i << ": "
					  << B_WHITE << materia->getType() << RESET << std::endl;
		} else {
			std::cout << "	Slot " << i << ": "
					  << B_WHITE << "[Empty]\n" << RESET;
		}
	}
}

/*-----------------*/
/*  Main function  */
/*-----------------*/
int main( void ) {

	std::cout << B_BLACK
			  << "\n--------- Testing Materia Source ---------\n\n"
			  << RESET;

	IMateriaSource* src = new MateriaSource();

	std::cout << "Learning Materias: Ice and Cure...\n";
	src->learnMateria( new Ice() );
	src->learnMateria( new Cure() );

	std::cout << "Attempting to learn wrong Materia...\n";
	src->learnMateria( nullptr );  // Invalid materia should be ignored

	std::cout << B_BLACK
			  << "\n---- Testing Characters and Inventory ----\n\n"
			  << RESET;

	ICharacter* me = new Character( "me" );
	displayInventory( me );

	std::cout << "Creating and equipping Materias...\n";
	AMateria* tmp;

	tmp = src->createMateria( "ice" );
	me->equip( tmp );
	displayInventory( me );

	tmp = src->createMateria( "cure" );
	me->equip( tmp );
	displayInventory( me );

	tmp = src->createMateria( "unknown" );

	std::cout << B_BLACK
			  << "\n--------- Testing Materia Usage ---------\n\n"
			  << RESET;

	ICharacter* bob = new Character( "bob" );

	me->use( 0, *bob ); // Should shoot an ice bolt
	me->use( 1, *bob ); // Should heal

	std::cout << B_BLACK
			  << "\n------------ Testing Unequip ------------\n\n"
			  << RESET;

	tmp = me->getMateria( 0 );
	me->unequip( 0 ); // Unequip ice
	delete tmp; // Prevent memory leak since it was unequipped
	displayInventory( me );

	tmp = src->createMateria( "ice" );
	me->equip( tmp ); // Re-equip ice in the first empty slot
	displayInventory( me );

	me->use( 0, *bob ); // Should shoot an ice bolt again

	std::cout << B_BLACK
			  << "\n------ Testing Inventory Overflow ------\n\n"
			  << RESET;
	tmp = src->createMateria( "ice" );
	me->equip( tmp );
	displayInventory( me );

	tmp = src->createMateria( "cure" );
	me->equip( tmp );
	displayInventory( me );

	tmp = src->createMateria( "cure" ); // Inventory full
	std::cout << "Trying to equip Materia in a full inventory...\n";
	me->equip( tmp ); // Should not equip, inventory full
	delete tmp; // Prevent memory leak since it was not equipped
	displayInventory( me );

	me->use( 3, *bob ); // Should use the last slot

	std::cout << B_BLACK
			  << "\n--------------- Cleanup ---------------\n"
			  << RESET;
	delete bob;
	delete me;
	delete src;

	std::cout << B_BLACK
			  << "\n----- Program Ended Without Leaks -----\n\n"
			  << RESET;
	return 0;
}

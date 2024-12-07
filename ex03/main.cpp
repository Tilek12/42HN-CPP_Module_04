/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:53:50 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/07 18:51:05 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

// int	main( void ) {

// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;

// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);

// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);

// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);

// 	delete bob;
// 	delete me;
// 	delete src;

// 	return 0;
// }

// Helper function to display the inventory of a character
void displayInventory(const ICharacter* character) {
    const Character* c = dynamic_cast<const Character*>(character);
    if (!c) return;

    std::cout << "Inventory of " << character->getName() << ":" << std::endl;
    for (int i = 0; i < 4; ++i) {
        AMateria* materia = c->getMateria(i);
        if (materia) {
            std::cout << "  Slot " << i << ": " << materia->getType() << std::endl;
        } else {
            std::cout << "  Slot " << i << ": [Empty]" << std::endl;
        }
    }
}


int main() {
    std::cout << "==== Testing Materia Source ====" << std::endl;
    IMateriaSource* src = new MateriaSource();

    std::cout << "Learning Materias: Ice and Cure" << std::endl;
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    std::cout << "Attempting to learn an extra Materia (Ice): " << std::endl;
    src->learnMateria(new Ice()); // Already learned, but capacity allows 4
    src->learnMateria(nullptr);  // Invalid materia should be ignored

    std::cout << "==== Testing Characters and Inventory ====" << std::endl;
    ICharacter* me = new Character("me");
    displayInventory(me);

    std::cout << "Creating and equipping Materias" << std::endl;
    AMateria* tmp;

    tmp = src->createMateria("ice");
    if (tmp) std::cout << "Created Materia: " << tmp->getType() << std::endl;
    me->equip(tmp);
    displayInventory(me);

    tmp = src->createMateria("cure");
    if (tmp) std::cout << "Created Materia: " << tmp->getType() << std::endl;
    me->equip(tmp);
    displayInventory(me);

    tmp = src->createMateria("unknown");
    if (!tmp) {
        std::cout << "Attempted to create unknown materia: Returned nullptr" << std::endl;
    }

    std::cout << "==== Testing Materia Usage ====" << std::endl;
    ICharacter* bob = new Character("bob");

    me->use(0, *bob); // Should shoot an ice bolt
    me->use(1, *bob); // Should heal

    std::cout << "==== Testing Unequip ====" << std::endl;
    me->unequip(0); // Unequip ice
    displayInventory(me);

    tmp = src->createMateria("ice");
    if (tmp) std::cout << "Recreated Materia: " << tmp->getType() << std::endl;
    me->equip(tmp); // Re-equip ice in the first empty slot
    displayInventory(me);

    me->use(0, *bob); // Should shoot an ice bolt again

    std::cout << "==== Testing Deep Copy ====" << std::endl;
    std::cout << "Creating a deep copy of 'me' into 'clone'" << std::endl;
    Character* clone = new Character(*dynamic_cast<Character*>(me)); // Deep copy
    displayInventory(clone);

    std::cout << "Using Materias in clone" << std::endl;
    clone->use(0, *bob); // Should shoot an ice bolt
    clone->use(1, *bob); // Should heal

    std::cout << "Original inventory after cloning (should be unchanged):" << std::endl;
    displayInventory(me);

    std::cout << "==== Testing Inventory Overflow ====" << std::endl;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    displayInventory(me);

    tmp = src->createMateria("cure");
    me->equip(tmp);
    displayInventory(me);

    tmp = src->createMateria("cure"); // Inventory full
    std::cout << "Trying to equip Materia in a full inventory: " << std::endl;
    me->equip(tmp); // Should not equip, inventory full
    delete tmp; // Prevent memory leak since it was not equipped
    displayInventory(me);

    me->use(3, *bob); // Should use the last slot

    std::cout << "==== Cleanup ====" << std::endl;
    delete bob;
    delete me;
    delete clone;
    delete src;

    std::cout << "==== Program Ended Without Leaks ====" << std::endl;
    return 0;
}

// int main() {
//     std::cout << "==== Testing Materia Source ====" << std::endl;
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());

//     std::cout << "==== Testing Characters and Inventory ====" << std::endl;
//     ICharacter* me = new Character("me");
//     AMateria* tmp;

//     tmp = src->createMateria("ice");
//     me->equip(tmp);

//     tmp = src->createMateria("cure");
//     me->equip(tmp);

//     tmp = src->createMateria("unknown"); // Should return nullptr
//     if (!tmp) {
//         std::cout << "Attempted to create unknown materia: Returned nullptr" << std::endl;
//     }

//     std::cout << "==== Testing Materia Usage ====" << std::endl;
//     ICharacter* bob = new Character("bob");

//     me->use(0, *bob); // Should shoot an ice bolt
//     me->use(1, *bob); // Should heal

//     std::cout << "==== Testing Unequip ====" << std::endl;
//     me->unequip(0); // Unequip ice
//     me->use(0, *bob); // Should do nothing since slot 0 is empty

//     tmp = src->createMateria("ice");
//     me->equip(tmp); // Re-equip ice in the first empty slot

//     me->use(0, *bob); // Should shoot an ice bolt again

//     std::cout << "==== Testing Deep Copy ====" << std::endl;
//     Character* clone = new Character(*dynamic_cast<Character*>(me)); // Deep copy
//     clone->use(0, *bob); // Should work independently of the original

//     std::cout << "==== Testing Inventory Overflow ====" << std::endl;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);

//     tmp = src->createMateria("cure"); // Inventory full
//     me->equip(tmp); // Should not equip, inventory full
//     delete tmp; // Prevent memory leak since it was not equipped

//     me->use(3, *bob); // Should use the last slot

//     std::cout << "==== Cleanup ====" << std::endl;
//     delete bob;
//     delete me;
//     delete clone;
//     delete src;

//     std::cout << "==== Program Ended Without Leaks ====" << std::endl;
//     return 0;
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:17:48 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/06 15:18:55 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main( void ) {

	std::cout << B_BLACK
			  << "\n------------Tests for Usual Animals------------\n\n"
			  << RESET;

	const Animal*	animal = new Animal();
	const Animal*	dog = new Dog();
	const Animal*	cat = new Cat();

	std::cout << B_WHITE << animal->getType() << ": " << RESET;
	animal->makeSound();

	std::cout << B_WHITE << dog->getType() << ": " << RESET;
	dog->makeSound();

	std::cout << B_WHITE << cat->getType() << ": " << RESET;
	cat->makeSound();

	delete animal;
	delete dog;
	delete cat;

	std::cout << B_BLACK
			  << "\n------------Tests for Wrong Animals------------\n\n"
			  << RESET;

	const WrongAnimal*	wrongAnimal = new WrongAnimal();
	const WrongCat*		wrongCat = new WrongCat();

	std::cout << B_WHITE
			  << "What the weird Animal is this???\n"
			  << wrongAnimal->getType() << ": "
			  << RESET;

	wrongAnimal->makeSound();

	std::cout << B_WHITE << wrongCat->getType() << ": " << RESET;
	wrongCat->makeSound();

	delete wrongAnimal;
	delete wrongCat;

	return 0;
}

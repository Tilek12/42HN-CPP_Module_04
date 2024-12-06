/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:17:48 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/06 19:26:17 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main( void ) {

	std::cout << B_BLACK
			  << "\n--- Tests for Animals: Dog and Cat ---\n\n"
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
			  << "\n----- Tests for array of Animals -----\n\n"
			  << RESET;

	Animal*	animals[4];

	for ( int i = 0; i < 2; i++ ) {
		animals[i] = new Dog();
	}

	for (int i = 2; i < 4; i++ ) {
		animals[i] = new Cat();
	}

	for ( int i = 0; i < 4; i++ ) {
		delete animals[i];
	}

	std::cout << B_BLACK
			  << "\n---------- Tests for Ideas ----------\n\n"
			  << RESET;

	Dog originalDog;
	originalDog.setIdea(0, "Chase the ball");
	Dog copiedDog(originalDog);
	std::cout << "Original Dog Idea: "
			  << B_WHITE << originalDog.getIdea(0) << RESET << std::endl;
	std::cout << "Copied Dog Idea: "
			  << B_WHITE << copiedDog.getIdea(0) << RESET << std::endl;

	copiedDog.setIdea(0, "Guard the house");
	std::cout << "After modifying\n";
	std::cout << "Original Dog Idea: "
			  << B_WHITE << originalDog.getIdea(0) << RESET << std::endl;
	std::cout << "Copied Dog Idea: "
			  << B_WHITE << copiedDog.getIdea(0) << RESET << std::endl;

	return 0;
}

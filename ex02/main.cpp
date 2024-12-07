/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:17:48 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/07 09:27:19 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main( void ) {

	std::cout << B_BLACK
			  << "\n--- Tests for Animals: Dog and Cat ---\n\n"
			  << RESET;

	const AAnimal*	dog = new Dog();
	const AAnimal*	cat = new Cat();

	std::cout << B_WHITE << dog->getType() << ": " << RESET;
	dog->makeSound();

	std::cout << B_WHITE << cat->getType() << ": " << RESET;
	cat->makeSound();

	delete dog;
	delete cat;

	std::cout << B_BLACK
			  << "\n----- Tests for array of Animals -----\n\n"
			  << RESET;

	AAnimal*	animals[4];

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

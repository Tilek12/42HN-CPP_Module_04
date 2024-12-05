/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:31:20 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/05 10:39:40 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal {

protected:

	std::string	type;

public:

	Animal( const std::string type );
	Animal( const Animal& other );
	Animal&	operator=( const Animal& other );
	~Animal( void );

	void	makeSound( void );

};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:34:43 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/07 09:27:21 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

/*--------------------*/
/*  Define Dog class  */
/*--------------------*/
class	Dog : public AAnimal {

private:

	Brain*	_brain;

public:

	Dog( void );
	Dog( const Dog& other );
	Dog&	operator=( const Dog& other );
	~Dog( void );

	virtual void	makeSound( void ) const;
	void			setIdea( int index, const std::string& idea );
	std::string		getIdea( int index ) const;

};

#endif

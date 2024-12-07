/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:14:42 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/07 09:27:20 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

/*--------------------*/
/*  Define Cat class  */
/*--------------------*/
class	Cat : public AAnimal {

private:

	Brain*	_brain;

public:

	Cat( void );
	Cat( const Cat& other );
	Cat&	operator=( const Cat& other );
	~Cat( void );

	virtual void	makeSound( void ) const;
	void			setIdea( int index, const std::string& idea );
	std::string		getIdea( int index ) const;

};

#endif

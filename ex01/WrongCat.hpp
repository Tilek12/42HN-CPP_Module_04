/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:10:31 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/06 12:16:35 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {

public:

	WrongCat( void );
	WrongCat( const WrongCat& other );
	WrongCat&	operator=( const WrongCat& other );
	~WrongCat( void );

	void	makeSound( void ) const;

};

#endif
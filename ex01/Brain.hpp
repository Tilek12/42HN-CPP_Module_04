/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 15:32:05 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/06 16:20:33 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

/*----------------------*/
/*  Define Brain class  */
/*----------------------*/
class	Brain {

private:

	std::string	_ideas[100];

public:

	Brain( void );
	Brain( const Brain& other );
	Brain&	operator=( const Brain& other );
	~Brain( void );

	void		setIdea( int index, const std::string& idea );
	std::string	getIdea( int index ) const;

};

#endif

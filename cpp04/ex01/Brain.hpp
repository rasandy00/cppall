/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landriam <landriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 18:05:33 by landriam          #+#    #+#             */
/*   Updated: 2026/06/18 23:48:07 by landriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain {
	private:

		std::string	ideas[100];

	public:

		Brain( void );
		Brain( const Brain& other);
		Brain&	operator=( const Brain& other );
		~Brain( void );

		std::string	getThought( unsigned int index ) const;
		void		setThought( const std::string& thought );
};

#endif

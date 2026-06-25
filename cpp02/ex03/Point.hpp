/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briandri <briandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 03:05:49 by briandri          #+#    #+#             */
/*   Updated: 2026/05/05 03:06:29 by briandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		Fixed const	_x;
		Fixed const	_y;

	public:
		Point(void);
		Point(float const x, float const y);
		Point(Point const &other);
		Point &operator=(Point const &other);
		~Point(void);

		Fixed const	&getX(void) const;
		Fixed const	&getY(void) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif

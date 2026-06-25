/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briandri <briandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 03:05:45 by briandri          #+#    #+#             */
/*   Updated: 2026/05/05 03:06:37 by briandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
}

Point::Point(Point const &other) : _x(other._x), _y(other._y)
{
}

Point &Point::operator=(Point const &other)
{
	(void)other;
	return (*this);
}

Point::~Point(void)
{
}

Fixed const	&Point::getX(void) const
{
	return (this->_x);
}

Fixed const	&Point::getY(void) const
{
	return (this->_y);
}

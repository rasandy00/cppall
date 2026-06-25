/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briandri <briandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 03:05:26 by briandri          #+#    #+#             */
/*   Updated: 2026/05/05 03:06:26 by briandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	sign(Point const &a, Point const &b, Point const &c)
{
	return ((a.getX() - c.getX()) * (b.getY() - c.getY())
		- (b.getX() - c.getX()) * (a.getY() - c.getY()));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed const	zero(0);
	Fixed const	first(sign(point, a, b));
	Fixed const	second(sign(point, b, c));
	Fixed const	third(sign(point, c, a));
	bool const	hasNegative = (first < zero || second < zero || third < zero);
	bool const	hasPositive = (first > zero || second > zero || third > zero);
	bool const	onEdge = (first == zero || second == zero || third == zero);

	return (!onEdge && !(hasNegative && hasPositive));
}

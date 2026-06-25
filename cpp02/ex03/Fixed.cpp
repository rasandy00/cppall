/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briandri <briandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 03:05:29 by briandri          #+#    #+#             */
/*   Updated: 2026/05/05 03:06:28 by briandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <cmath>

Fixed::Fixed(void) : _value(0)
{
}

Fixed::Fixed(int const value) : _value(value * (1 << _fractionalBits))
{
}

Fixed::Fixed(float const value)
	: _value(static_cast<int>(roundf(value * (1 << _fractionalBits))))
{
}

Fixed::Fixed(Fixed const &other) : _value(other._value)
{
}

Fixed &Fixed::operator=(Fixed const &other)
{
	if (this != &other)
		this->_value = other._value;
	return (*this);
}

Fixed::~Fixed(void)
{
}

bool	Fixed::operator>(Fixed const &other) const
{
	return (this->_value > other._value);
}

bool	Fixed::operator<(Fixed const &other) const
{
	return (this->_value < other._value);
}

bool	Fixed::operator>=(Fixed const &other) const
{
	return (this->_value >= other._value);
}

bool	Fixed::operator<=(Fixed const &other) const
{
	return (this->_value <= other._value);
}

bool	Fixed::operator==(Fixed const &other) const
{
	return (this->_value == other._value);
}

bool	Fixed::operator!=(Fixed const &other) const
{
	return (this->_value != other._value);
}

Fixed	Fixed::operator+(Fixed const &other) const
{
	Fixed	result;

	result._value = this->_value + other._value;
	return (result);
}

Fixed	Fixed::operator-(Fixed const &other) const
{
	Fixed	result;

	result._value = this->_value - other._value;
	return (result);
}

Fixed	Fixed::operator*(Fixed const &other) const
{
	Fixed	result;

	result._value = static_cast<int>(
			static_cast<long>(this->_value) * other._value
			/ (1 << _fractionalBits));
	return (result);
}

Fixed	Fixed::operator/(Fixed const &other) const
{
	Fixed	result;

	result._value = static_cast<int>(
			static_cast<long>(this->_value) * (1 << _fractionalBits)
			/ other._value);
	return (result);
}

Fixed	&Fixed::operator++(void)
{
	++this->_value;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	old(*this);

	++(*this);
	return (old);
}

Fixed	&Fixed::operator--(void)
{
	--this->_value;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	old(*this);

	--(*this);
	return (old);
}

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_value) / (1 << _fractionalBits));
}

int	Fixed::toInt(void) const
{
	return (this->_value / (1 << _fractionalBits));
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}

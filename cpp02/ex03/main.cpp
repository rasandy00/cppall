/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briandri <briandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 03:05:36 by briandri          #+#    #+#             */
/*   Updated: 2026/06/22 00:15:05 by briandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#include <iostream>

static void	printResult(char const *label, bool result)
{
	std::cout << label << ": ";
	if (result)
		std::cout << "true";
	else
		std::cout << "false";
	std::cout << std::endl;
}

int	main(void)
{
	Point const	a(0.0f, 0.0f);
	Point const	b(5.0f, 0.0f);
	Point const	c(0.0f, 5.0f);

	printResult("inside", bsp(a, b, c, Point(1.0f, 1.0f)));
	printResult("outside", bsp(a, b, c, Point(6.0f, 1.0f)));
	printResult("edge", bsp(a, b, c, Point(2.0f, 0.0f)));
	printResult("vertex", bsp(a, b, c, Point(0.0f, 5.0f)));
	return (0);
}

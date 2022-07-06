/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:24:28 by jforner           #+#    #+#             */
/*   Updated: 2022/07/06 16:37:52 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

int main() 
{
	
	Point a(3, 4);
	Point b(-2, -2);

	Point c(-5, -2);

	Point d(2, 3);

	// d = b;
	std::cout << "a, x = " << a.getX() << " y = " << a.getY() << std::endl;
	std::cout << "b, x = " << b.getX() << " y = " << b.getY() << std::endl;
	std::cout << "c, x = " << c.getX() << " y = " << c.getY() << std::endl;
	std::cout << "d, x = " << d.getX() << " y = " << d.getY() << std::endl;

	bool tri = bsp( a, b, c, d);
	if (tri)
		std::cout << "You Win !" << std::endl;
	else
		std::cout << "You loose !" << std::endl;

// system("leaks point");
	return 0;
}
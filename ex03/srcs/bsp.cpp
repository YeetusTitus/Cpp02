/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:28:15 by jforner           #+#    #+#             */
/*   Updated: 2022/07/05 17:55:31 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    int neg[3] = {0, 0, 0};

    if (calculus(a, b, point) > 0)
        neg[0] = 1;
    else if (calculus(a, b, point) < 0)
        neg[0] = -1;
    if (calculus(b, c, point) > 0)
        neg[1] = 1;
    else if (calculus(b, c, point) < 0)
        neg[1] = -1;
    if (calculus(c, a, point) > 0)
        neg[2] = 1;
    else if (calculus(c, a, point) < 0)
        neg[2] = -1;
    if ((!neg[1] && !neg[2])
        || (!neg[0] && !neg[1])
        || (!neg[2] && !neg[0])
        || (!neg[0] && neg[2] == neg[1])
        || (!neg[1] && neg[0] == neg[2])
        || (!neg[2] && neg[1] == neg[0])
        || (neg[2] == neg[0] && neg[1] == neg[0]))
        return true;
    else
        return false;
}

int calculus( Point const n1, Point const n2, Point const point)
{
    return (((n2.getX() - point.getX()) * (n1.getY() - point.getY())) - ((n2.getY() - point.getY()) * (n1.getX() - point.getX())));
}
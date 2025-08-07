/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:59:37 by jose-gon          #+#    #+#             */
/*   Updated: 2025/08/07 17:45:52 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T& a, T& b)
{
	T temp = b;
	b = a;
	a = temp;
}

template <typename T>
T &min(T& a, T& b)
{
	if (a < b)
		return a;
	else
		return b;	
}

template <typename T>
T &max(T& a, T& b)
{
	if (a > b)
		return a;
	else
		return b;	
}

#endif

// Implement the following function templates:
// • swap: Swaps the values of two given arguments. Does not return anything.
// • min: Compares the two values passed in its arguments and returns the smallest
// one. If the two of them are equal, then it returns the second one.
// • max: Compares the two values passed in its arguments and returns the greatest one.
// If the two of them are equal, then it returns the second one.
// These functions can be called with any type of argument. The only requirement is
// that the two arguments must have the same type and must support all the comparison
// operators.
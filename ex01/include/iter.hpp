/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 18:09:50 by jose-gon          #+#    #+#             */
/*   Updated: 2025/08/07 18:50:49 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename T, typename F>
void iter(T* array, size_t lenght, F func)
{
	for (size_t i = 0; i < lenght; i++)
	{
		func(array[i]);
	}
}

#endif

// Implement a function template iter that takes 3 parameters and returns nothing.
// • The first parameter is the address of an array.
// • The second one is the length of the array.
// • The third one is a function that will be called on every element of the array.
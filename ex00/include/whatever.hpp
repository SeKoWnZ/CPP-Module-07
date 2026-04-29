/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:59:37 by jose-gon          #+#    #+#             */
/*   Updated: 2026/04/29 17:29:35 by jose-gon         ###   ########.fr       */
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
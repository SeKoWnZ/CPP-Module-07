/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:39:19 by jose-gon          #+#    #+#             */
/*   Updated: 2026/04/29 17:33:11 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
	private:
		T *_array;
		unsigned int _size;
		
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		Array& operator=(const Array& other);
		~Array();

		const T& operator[](unsigned int index) const;
		
		class BoundsException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "Index is out of bounds";
				};
		};
		
		unsigned int size() const;
};

#include <Array.tpp>

#endif
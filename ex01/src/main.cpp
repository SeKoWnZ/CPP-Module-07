/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:18:35 by jose-gon          #+#    #+#             */
/*   Updated: 2025/08/07 18:52:40 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iter.hpp>

//Ejemplo de función normal
void printInt(int x) {
    std::cout << "int: " << x << std::endl;
}

//Ejemplo de función template
template <typename T>
void printGeneric(const T& x) {
    std::cout << "value: " << x << std::endl;
}

//Otra función: modificar elemento (sólo para mostrar)
template <typename T>
void increment(T& x) {
    ++x;
}

int main() {
    // 🔹 Prueba con int
    int arr1[] = {1, 2, 3, 4, 5};
    std::cout << "=== Int array ===" << std::endl;
    iter(arr1, 5, printInt);

    std::cout << "Incrementing int array..." << std::endl;
    iter(arr1, 5, increment<int>);
    iter(arr1, 5, printGeneric<int>);

    // 🔹 Prueba con strings
    std::string arr2[] = {"Hello", "World", "C++"};
    std::cout << "\n=== String array ===" << std::endl;
    iter(arr2, 3, printGeneric<std::string>);

    return 0;
}
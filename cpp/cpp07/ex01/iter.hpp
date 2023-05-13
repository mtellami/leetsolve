/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:52:08 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/03 18:59:31 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T* array, size_t length, void (*f)(T&)) {
	if (!array || !f)
		return;
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}

#endif
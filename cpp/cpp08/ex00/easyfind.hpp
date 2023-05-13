/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:11:01 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/03 23:07:23 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
void    easyfind(T& container, int value) {
    if (std::find( container.begin(), container.end(), value ) != container.end())
        std::cout << "Found." << std::endl;
    else
        std::cout << "Not found." << std::endl;
}

#endif
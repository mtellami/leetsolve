/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:12:45 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/03 23:08:06 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main(void) {

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::vector<int> vect(arr, arr + sizeof(arr) / sizeof(int));
    std::list<int> list(arr, arr + sizeof(arr) / sizeof(int));

    easyfind(vect, 13);
    easyfind(list, 5);

    return 0;
}

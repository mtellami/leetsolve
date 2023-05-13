/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:59:39 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/03 19:04:43 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void print(T& _) {
	std::cout << _ << std::endl;
}

int main(void) {
    int arr[3] = {1, 2, 3};
    std::string str[3] = {"str1", "str2", "str3"};

    ::iter(arr, 3, print);
    ::iter(str, 3, print);

    return 0;
}

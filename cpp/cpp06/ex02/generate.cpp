/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:42:25 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/03 18:20:47 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void) {
    int _random = time(NULL) % 3;
    if (!_random)
        return new A;
    else if (_random % 2)
        return new B;
    else
        return new C;
}

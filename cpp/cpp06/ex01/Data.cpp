/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:31:19 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/02 19:15:47 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void) {
}

Data::Data(const Data& obj) {
    (void)obj;
}

Data& Data::operator=(const Data& obj) {
    (void)obj;
    return *this;
}

Data::~Data(void) {
}

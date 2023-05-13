/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 07:38:21 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/15 05:05:31 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// Constructor
ScalarConverter::ScalarConverter( void ) {
}

// Copy constructor
ScalarConverter::ScalarConverter( const ScalarConverter& obj ) {
    *this = obj;
}

// Copy assignment operator
ScalarConverter& ScalarConverter::operator=( const ScalarConverter& obj ) {
    ( void )obj;
    return *this;
}

// Destructor
ScalarConverter::~ScalarConverter( void ) {
}

// Member functions
void ScalarConverter::convert( const std::string literal ) {
    
}

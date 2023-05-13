/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 07:38:18 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/14 07:54:38 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter {

    private :

        char    _c;
        int     _n;
        float   _f;
        double  _d;

    public :

        ScalarConverter( void );
        ScalarConverter( const ScalarConverter& obj );
        ScalarConverter& operator=( const ScalarConverter& obj );
        ~ScalarConverter( void );

        static void convert( const std::string literal );

        char    getC( void );
        int     getN( void );
        float   getF( void );
        double  getD( void );
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 23:45:24 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/03 17:58:26 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base {

    public:

        virtual ~Base(void);

    private:

};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
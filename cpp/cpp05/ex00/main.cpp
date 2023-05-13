/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:42:45 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/11 00:35:40 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void ) {

    try {
        Bureaucrat obj("human", 150);
        std::cout << obj << std::endl;
        obj.increment();
        
    } catch ( Bureaucrat::GradeTooHighException &exeption ) {
        std::cerr << exeption.what() << std::endl;
    }

    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:42:45 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/12 03:15:25 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main( void )
{
    try {
        Bureaucrat bureaucrat("moad", 4);
        Form form("palas", 10, 15);

        bureaucrat.signForm(form);

        std::cout << form << std::endl;

    } catch (std::exception &e) {

        std::cout << e.what() << std::endl;
    }

    return 0;
}

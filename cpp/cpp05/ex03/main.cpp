/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:42:45 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/14 07:15:51 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"

int main( void )
{
    Intern someRandomIntern;
    AForm* rrf;

    rrf = someRandomIntern.makeForm("robotomy request", "Bender");

    std::cout << rrf->getName() << std::endl;

    delete rrf;

    return 0;
}

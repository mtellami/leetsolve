/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:31:29 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/02 19:17:06 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

class Data {
    private:

    public :
        Data(void);
        Data(const Data& obj);
        Data& operator=(const Data& obj);
        ~Data(void);
};

#endif
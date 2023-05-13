/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:31:21 by mtellami          #+#    #+#             */
/*   Updated: 2023/05/02 19:21:01 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <cstdint>
#include "Data.hpp"

class Serializer {
    private:

    public:
        Serializer(void);
        Serializer(const Serializer& obj);
        Serializer& operator=(const Serializer& obj);
        ~Serializer(void);

        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 11:39:56 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/11 11:41:03 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <stdint.h>
# include <iostream>

struct  Data
{
    uintptr_t   number;
};

uintptr_t   serialize(Data* ptr);
Data*       deserialize(uintptr_t raw);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_print.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcornill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:03:44 by vcornill          #+#    #+#             */
/*   Updated: 2023/10/24 15:29:27 by vcornill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	x_print(long long int ap, int *i)
{
	ft_putnbr_base((unsigned int)ap, "0123456789abcdef", i);
}

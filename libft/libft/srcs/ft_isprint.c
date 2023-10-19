/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcornill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:48:29 by vcornill          #+#    #+#             */
/*   Updated: 2023/10/16 14:48:31 by vcornill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(char c)
{
	return (c >= 32 && c <= 126);
}

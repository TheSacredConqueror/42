/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcornill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:46:19 by vcornill          #+#    #+#             */
/*   Updated: 2023/10/16 18:01:47 by vcornill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, void *src, int n)
{
	unsigned int	i;
	unsigned int	g;
	unsigned char	*d;
	unsigned char	*s;
	
	d = dest;
	s = src;
	g = n;
	i = 0;
	while (i++ < g)
		d[i] = s[i];
	return (dest);
}

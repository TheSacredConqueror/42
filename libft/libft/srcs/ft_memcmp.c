/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcornill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:02:31 by vcornill          #+#    #+#             */
/*   Updated: 2023/10/17 11:35:43 by vcornill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(void *s1, void *s2, int n)
{
	unsigned char	*one;
	unsigned char	*two;
	unsigned int	i;
	unsigned int	g;
	
	one = s1;
	two = s2;
	i = 0;
	g = n;
	while (one[i] != two[i] && i < g)
		i++;
	return (one[i] - two[i]);
}

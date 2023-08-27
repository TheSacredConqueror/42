/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcornill <vcornill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 12:26:48 by vcornill          #+#    #+#             */
/*   Updated: 2023/08/27 13:16:57 by vcornill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ourlib.h"

void	first_digit(char **dict, char digit, int counter_rows)
{
	char	buffer[3];

	buffer[0] = digit;
	buffer[1] = '\0';
	read_words(ft_strstr(dict, counter_rows, buffer));
	write(1, " ", 1);
	read_words(ft_strstr(dict, counter_rows, "100"));
	write(1, " ", 1);
}

void	second_digit(char **dict, char *digits, int counter_rows)
{
	char	buffer[3];

	buffer[0] = digits[1];
	if (buffer[0] == '1')
		buffer[1] = digits[2];
	else
		buffer[1] = '0';
	buffer[2] = '\0';
	read_words(ft_strstr(dict, counter_rows, buffer));
	write(1, " ", 1);
}

void	third_digit(char **dict, char digit, int counter_rows)
{
	char	buffer[3];

	buffer[0] = digit;
	buffer[1] = '\0';
	read_words(ft_strstr(dict, counter_rows, buffer));
	write(1, " ", 1);
}

void	bignum(char **dict, int counter_rows, int max, int i)
{
	char	num[15];
	int		o;
	int		j;

	o = 0;
	j = 1;
	while (++o <= max - i)
	{
		num[0] = '1';
		num[j++] = '0';
		num[j++] = '0';
		num[j++] = '0';
		num[j] = '\0';
	}
	if (i != max)
	{
		read_words(ft_strstr(dict, counter_rows, num));
		write(1, " ", 1);
	}
}

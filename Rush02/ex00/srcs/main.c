/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcornill <vcornill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 12:07:10 by vcornill          #+#    #+#             */
/*   Updated: 2023/08/27 12:59:07 by vcornill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ourlib.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (error(argv[1]))
			return (1);
		if (algo("numbers.dict", argv[1]))
			return (1);
	}
	else if (argc == 3)
	{
		if (error(argv[2]))
			return (1);
		if (algo(argv[1], argv[2]))
			return (1);
	}
	else
	{
		puterror("Error\n");
		return (1);
	}
	return (0);
}

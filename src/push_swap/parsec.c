/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:04:51 by amiguez           #+#    #+#             */
/*   Updated: 2022/01/10 13:04:39 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_swap.h"

int	ft_parsec(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!ft_atoi(argv[i]))
			{
				write(1, "Error,Bad argument", 18);
				return (0);
			}
			j++;
		}
		i++;
	}
}

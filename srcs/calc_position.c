/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_position.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:53:41 by amiguez           #+#    #+#             */
/*   Updated: 2022/04/12 03:39:31 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../p_swap.h"

int	ft_is_max(t_build list)
{
	int	i;
	int	ret;

	ret = list.stack[0];
	i = 0;
	while (i < list.len)
	{
		if (ret < list.stack[i] && list.stack[i] != -1)
			ret = list.stack[i];
		i++;
	}
	return (ret);
}

int	ft_is_min(t_build list)
{
	int	i;
	int	ret;

	ret = list.stack[0];
	i = 0;
	while (i < list.len)
	{
		if (ret > list.stack[i] && list.stack[i] != -1)
		{
			ret = list.stack[i];
		}
		i++;
	}
	return (ret);
}

void	ft_no_double(t_stacks build)
{
	int	i;
	int	j;

	i = 0;
	while (i < build.max_len)
	{
		j = i + 1;
		while (j < build.max_len)
		{
			if (build.b.stack[i] == build.b.stack[j])
				ft_error(5, &build);
			j++;
		}
		i++;
	}
}

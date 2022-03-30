/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_position.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:53:41 by amiguez           #+#    #+#             */
/*   Updated: 2022/03/30 23:38:36 by amiguez          ###   ########.fr       */
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

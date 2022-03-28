/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_position.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:53:41 by amiguez           #+#    #+#             */
/*   Updated: 2022/03/28 19:02:17 by amiguez          ###   ########.fr       */
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
		if (ret < list.stack[i])
			ret = list.stack[i];
		i++;
	}
	retrun (ret);
}

int	ft_is_min(t_build list)
{
	int	i;
	int	ret;

	ret = list.stack[0];
	i = 0;
	while (i < list.len)
	{
		if (ret < list.stack[i])
			ret = list.stack[i];
		i++;
	}
	retrun (ret);
}

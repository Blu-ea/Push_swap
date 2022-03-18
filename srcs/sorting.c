/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:25:09 by amiguez           #+#    #+#             */
/*   Updated: 2022/03/18 13:16:08 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../p_swap.h"

void	ft_is_done_sorting(t_stacks pwap)
{
	int	i;
	int	sorted;

	sorted = 1;
	i = 1;
	if (pwap.a.len == pwap.max_len)
	{	
		while (i < pwap.max_len)
		{
			if (pwap.a.stack[i - 1] > pwap.a.stack[i])
				sorted = 0;
			i++;
		}
	}
	if (sorted == 1)
		exit(0);
}

void	ft_sorting(t_stacks pwap)
{
	ft_is_done_sorting(pwap);
	if (pwap.max_len == 2 || pwap.max_len == 3)
		ft_sort2(pwap, pwap.max_len);
}

void	ft_sort2(t_stacks pwap, int len)
{
	if (len == 2)
		ft_printf("sa\n");
	else
	{
		if (pwap.a.stack[0] == 0)
			ft_printf("sa\nra\n");
		else if (pwap.a.stack[0] == 1)
		{
			if (pwap.a.stack[1] == 0)
				ft_printf("sa\n");
			else
				ft_printf("rra\n");
		}
		else if (pwap.a.stack[1] == 1)
			ft_printf("sa\nrra\n");
		else
			ft_printf("ra");
	}
	exit(0);
}

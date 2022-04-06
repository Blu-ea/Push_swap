/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_big.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:48:41 by amiguez           #+#    #+#             */
/*   Updated: 2022/04/06 13:04:20 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../p_swap.h"

void	ft_sort4(t_stacks *pwap)
{
	while (pwap -> a.len != 2)
	{
		if (pwap -> a.stack[pwap -> a.len - 1] < 2)
		{
			ft_reverse_rotate_a(pwap);
			ft_push_a_to_b(pwap);
		}
		else if (pwap -> a.stack[0] < 2)
				ft_push_a_to_b(pwap);
		else
			ft_rotate_a(pwap);
	}
	if (pwap -> a.stack[0] == 3 && pwap -> b.stack[0] == 0)
		ft_swap_s(pwap);
	else if (pwap -> a.stack [0] == 3)
		ft_swap_a(pwap);
	else if (pwap -> b.stack [0] == 0)
		ft_swap_b(pwap);
	ft_push_b_to_a(pwap);
	ft_push_b_to_a(pwap);
}

void	ft_sort5(t_stacks *pwap)
{
	while (pwap -> a.len != 3)
	{
		if (pwap -> a.stack[pwap -> a.len - 1] < 2)
		{
			ft_reverse_rotate_a(pwap);
			ft_push_a_to_b(pwap);
		}
		else if (pwap -> a.stack[0] < 2)
			ft_push_a_to_b(pwap);
		else
			ft_rotate_a(pwap);
	}
	ft_sort3a(pwap);
	ft_push_b_to_a(pwap);
	ft_push_b_to_a(pwap);
	ft_sort2(pwap, 'a');
}

void	ft_sort_big(t_stacks *pwap)
{
	int	mid;

	while (pwap->a.len)
	{
		mid = (ft_is_min(pwap -> a) + ft_is_max(pwap -> a)) *0.50;
		if (pwap->a.stack[0] <= mid)
			ft_push_a_to_b(pwap);
		else if (pwap -> a.stack[pwap->a.len] >= mid)
			ft_reverse_rotate_a(pwap);
		else
			ft_rotate_a(pwap);
	}
	ft_push_b_to_a(pwap);
	while (pwap->b.len)
	{
		if (pwap->b.stack[0] == ft_is_max(pwap->b))
			ft_push_b_to_a(pwap);
		else if (pwap->b.stack[0] == ft_is_max(pwap->b) - 1)
		{
			ft_push_b_to_a(pwap);
			while (1)
			{
				if (pwap->b.stack[0] == ft_is_max(pwap->b))
				{
					ft_push_b_to_a(pwap);
					ft_swap_a(pwap);
					break;
				}
				else if (ft_get_index_max(pwap->b) < pwap->b.len / 2)
					ft_rotate_b(pwap);
				else
					ft_reverse_rotate_b(pwap);
			}
		}
		else if (ft_get_index_max(pwap->b) < pwap->b.len / 2)
			ft_rotate_b(pwap);
		else
			ft_reverse_rotate_b(pwap);
	}
}

int	ft_get_index_max(t_build list)
{
	int	index;
	int	i;

	i = 0;
	index = ft_is_max(list);
	while (i < list.len)
	{
		if (index == list.stack[i])
			return (i);
		i++;
	}
	return(-1);
}

// void	ft_rotate()
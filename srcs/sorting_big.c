/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_big.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:48:41 by amiguez           #+#    #+#             */
/*   Updated: 2022/03/30 23:41:37 by amiguez          ###   ########.fr       */
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
		else
		{
			if (pwap -> a.stack[0] < 2)
				ft_push_a_to_b(pwap);
			ft_rotate_a(pwap);
		}
	}
	if (pwap -> a.stack[0] == 3 && pwap -> b.stack[0] == 0)
		ft_swap_s(pwap);
	else if (pwap -> a.stack [0] == 3)
		ft_swap_a(pwap);
	else if (pwap -> b.stack [0] == 3)
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
	while (pwap -> a.len > pwap -> max_len / 2)
	{
		ft_push_a_to_b(pwap);
	}
}

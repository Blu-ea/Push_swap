/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:08:57 by amiguez           #+#    #+#             */
/*   Updated: 2022/03/18 15:26:57 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../p_swap.h"

void	ft_reverse_rotate_a(t_stacks *build)
{
	int	i;

	i = build -> a.len;
	while (i)
	{
		build -> a.stack[i] = build -> a.stack[i - 1];
		i--;
	}
	build -> a.stack[0] = build -> a.stack[build -> a.len];
	build -> a.stack[build -> a.len] = -1;
	ft_printf("rra\n");
}

void	ft_reverse_rotate_b(t_stacks *build)
{
	int	i;

	i = build -> b.len;
	while (i)
	{
		build -> b.stack[i] = build -> b.stack[i - 1];
		i--;
	}
	build -> b.stack[0] = build -> b.stack[build -> b.len];
	build -> b.stack[build -> b.len] = -1;
	ft_printf("rrb\n");
}

void	ft_reverse_rotate_r(t_stacks *build)
{
	int	i;

	i = build -> b.len;
	while (i)
	{
		build -> b.stack[i] = build -> b.stack[i - 1];
		i--;
	}
	build -> b.stack[0] = build -> b.stack[build -> b.len];
	build -> b.stack[build -> b.len] = -1;
	i = build -> a.len;
	while (i)
	{
		build -> a.stack[i] = build -> a.stack[i - 1];
		i--;
	}
	build -> a.stack[0] = build -> a.stack[build -> a.len];
	build -> a.stack[build -> a.len] = -1;
	ft_printf("rrr\n");
}

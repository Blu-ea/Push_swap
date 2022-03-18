/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:22:35 by amiguez           #+#    #+#             */
/*   Updated: 2022/03/18 15:07:55 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../p_swap.h"

void	ft_rotate_a(t_stacks *build)
{
	int	i;

	i = 0;
	build -> a.stack[build ->a.len] = build -> a.stack[0];
	while (i < build -> a.len)
	{
		build -> a.stack[i] = build -> a.stack[i + 1];
		i++;
	}
	build -> a.stack[i] = -1;
	ft_printf("ra\n");
}

void	ft_rotate_b(t_stacks *build)
{
	int	i;

	i = 0;
	build -> b.stack[build ->b.len] = build -> b.stack[0];
	while (i < build -> b.len)
	{
		build -> b.stack[i] = build -> b.stack[i + 1];
		i++;
	}
	build -> b.stack[i] = -1;
	ft_printf("rb\n");
}

void	ft_rotate_r(t_stacks *build)
{
	int	i;

	i = 0;
	build -> b.stack[build ->b.len] = build -> b.stack[0];
	while (i < build -> b.len)
	{
		build -> b.stack[i] = build -> b.stack[i + 1];
		i++;
	}
	build -> b.stack[i] = -1;
	i = 0;
	build -> a.stack[build ->a.len] = build -> a.stack[0];
	while (i < build -> a.len)
	{
		build -> a.stack[i] = build -> a.stack[i + 1];
		i++;
	}
	build -> a.stack[i] = -1;
	ft_printf("rr\n");
}

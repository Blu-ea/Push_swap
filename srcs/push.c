/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:22:32 by amiguez           #+#    #+#             */
/*   Updated: 2022/03/18 14:48:55 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../p_swap.h"

void	ft_push_a_to_b(t_stacks *build)
{
	int	i;

	if (build -> a.stack[0] == -1)
		return ;
	i = build -> b.len;
	while (i)
	{
		build -> b.stack[i] = build -> b.stack[i - 1];
		i--;
	}
	build -> b.stack[0] = build -> a.stack[0];
	i = 0;
	while (i < build -> a.len)
	{
		build -> a.stack[i] = build -> a.stack[i + 1];
		i++;
	}
	build -> b.len++;
	build -> a.len--;
	ft_printf("pb\n");
}

void	ft_push_b_to_a(t_stacks *build)
{
	int	i;

	if (build -> b.stack[0] == -1)
		return ;
	i = build -> a.len;
	while (i)
	{
		build -> a.stack[i] = build -> a.stack[i - 1];
		i--;
	}
	build -> a.stack[0] = build -> b.stack[0];
	i = 0;
	while (i < build -> b.len)
	{
		build -> b.stack[i] = build -> b.stack[i + 1];
		i++;
	}
	build -> a.len++;
	build -> b.len--;
	ft_printf("pa\n");
}

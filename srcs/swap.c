/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:22:34 by amiguez           #+#    #+#             */
/*   Updated: 2022/03/18 14:02:48 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../p_swap.h"

void	ft_swap_a(t_stacks *build)
{
	int	swap;

	if (build -> a.len <= 1)
		return ;
	 
	ft_printf("sa\n");
}

void	ft_swap_b(t_stacks *build)
{
	int	swap;

	if (build -> a.len <= 1)
		return ;
	swap = build -> b.stack[0];
	build -> b.stack[0] = build -> b.stack[1];
	build -> b.stack[1] = swap;
	ft_printf("sb\n");
}

void	ft_swap_s(t_stacks *build)
{
	int	swap;

	if (build -> a.len <= 1)
		return ;
	swap = build -> a.stack[0];
	build -> a.stack[0] = build -> a.stack[1];
	build -> a.stack[1] = swap;
	if (build -> b.len <= 1)
		return ;
	swap = build -> b.stack[0];
	build -> b.stack[0] = build -> b.stack[1];
	build -> b.stack[1] = swap;
	ft_printf("ss\n");
}

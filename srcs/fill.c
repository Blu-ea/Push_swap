/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:54:41 by amiguez           #+#    #+#             */
/*   Updated: 2022/02/25 19:37:03 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../p_swap.h"

t_stacks	ft_fill_val(char **list_arg)
{
	t_stacks	build_stacks;
	int			i;

	i = 0;
	build_stacks.max_len = ft_calc_size(list_arg);
	build_stacks.a.stack = malloc(sizeof(int *) * build_stacks.max_len);
	build_stacks.b.stack = malloc(sizeof(int *) * build_stacks.max_len);
	while (i < build_stacks.max_len)
	{
		build_stacks.a.stack[i] = ft_atoi(list_arg[i]);
		i++;
	}
	return (build_stacks);
}

int	ft_calc_size(char **args)
{
	int	i;

	i = 0;
	while (args[i])
		i++;
	return (i);
}

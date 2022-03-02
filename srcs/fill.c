/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:54:41 by amiguez           #+#    #+#             */
/*   Updated: 2022/03/02 17:27:55 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../p_swap.h"

t_stacks	ft_fill_val(char **list_arg)
{
	t_stacks	build_stacks;
	int			i;

	tab_print(list_arg);
	i = 0;
	build_stacks.max_len = ft_calc_size(list_arg);
	printf("maxlen = %d\n", build_stacks.max_len);
	build_stacks.a.stack = malloc(sizeof(int *) * build_stacks.max_len);
	build_stacks.b.stack = malloc(sizeof(int *) * build_stacks.max_len);
	while (i < build_stacks.max_len)
	{
		build_stacks.a.stack[i] = ft_atoi(list_arg[i]);
		i++;
	}
	free(list_arg);
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

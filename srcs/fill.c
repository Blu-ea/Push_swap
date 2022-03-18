/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:54:41 by amiguez           #+#    #+#             */
/*   Updated: 2022/03/18 14:27:18 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../p_swap.h"

t_stacks	ft_fill_val(char **list_arg)
{
	t_stacks	build_stacks;
	int			i;

	i = 0;
	build_stacks.max_len = ft_calc_size(list_arg);
	build_stacks.a.stack = malloc(sizeof(int *) * build_stacks.max_len + 1);
	build_stacks.a.stack[build_stacks.max_len] = -1;
	build_stacks.a.len = build_stacks.max_len;
	build_stacks.b.stack[build_stacks.max_len] = -1;
	build_stacks.b.stack = malloc(sizeof(int *) * build_stacks.max_len + 1);
	while (i < build_stacks.max_len)
	{
		build_stacks.b.stack[i] = ft_atoi(list_arg[i]);
		if (ft_strncmp(ft_itoa(build_stacks.b.stack[i]), list_arg[i],
				ft_strlen(list_arg[i]))
			&& (ft_strncmp("-0", (list_arg[i]),
					ft_strlen(list_arg[i]))))
			ft_error(10);
		i++;
	}
	free(list_arg);
	ft_no_double(build_stacks);
	ft_set_index(&build_stacks);
	return (build_stacks);
}

void	ft_set_index(t_stacks *build)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	while (i < build -> max_len)
	{
		j = 0;
		count = 0;
		while (j < build -> max_len)
		{
			if (build -> b.stack[i] > build ->b.stack[j])
				count++;
			j++;
		}
		build->a.stack[i] = count;
		i++;
	}
	i = 0;
	while (i < build -> max_len + 1)
	{
		build -> b.stack[i] = -1;
		i++;
	}
	build ->b.len = 0;
}

void	ft_no_double(t_stacks build)
{
	int	i;
	int	j;

	i = 0;
	while (i < build.max_len)
	{
		j = i + 1;
		while (j < build.max_len)
		{
			if (build.b.stack[i] == build.b.stack[j])
				ft_error(5);
			j++;
		}
		i++;
	}
}

int	ft_calc_size(char **args)
{
	int	i;

	i = 0;
	while (args[i])
		i++;
	return (i);
}

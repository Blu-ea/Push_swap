/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:54:41 by amiguez           #+#    #+#             */
/*   Updated: 2022/04/12 03:44:44 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../p_swap.h"

void	ft_free_list_arg(char **list, int argc)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (list[i])
		{
			free(list[i]);
			i++;
		}
	}
	free(list);
}

void	ft_verif_back(t_stacks build_stacks, char **list_arg, int i)
{
	char	*c;

	c = ft_itoa(build_stacks.b.stack[i]);
	if (ft_strncmp(c, list_arg[i],
			ft_strlen(list_arg[i]))
		&& (ft_strncmp("-0", (list_arg[i]),
				ft_strlen(list_arg[i]))))
	{
		ft_free(&build_stacks, 1);
		free(c);
		ft_error(10, &build_stacks);
	}
	free(c);
}

t_stacks	ft_fill_val(char **list_arg, int argc)
{
	t_stacks	build_stacks;
	int			i;

	i = 0;
	build_stacks.max_len = ft_calc_size(list_arg);
	build_stacks.a.stack = malloc(sizeof(int) * (build_stacks.max_len + 1));
	if (!build_stacks.a.stack)
		ft_error(11, &build_stacks);
	build_stacks.b.stack = malloc(sizeof(int) * (build_stacks.max_len + 1));
	if (!build_stacks.b.stack)
		ft_error(12, &build_stacks);
	build_stacks.a.stack[build_stacks.max_len] = -1;
	build_stacks.b.stack[build_stacks.max_len] = -1;
	build_stacks.a.len = build_stacks.max_len;
	while (i < build_stacks.max_len)
	{
		build_stacks.b.stack[i] = ft_atoi(list_arg[i]);
		ft_verif_back(build_stacks, list_arg, i);
		i++;
	}
	ft_free_list_arg(list_arg, argc);
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

int	ft_calc_size(char **args)
{
	int	i;

	i = 0;
	while (args[i])
		i++;
	return (i);
}

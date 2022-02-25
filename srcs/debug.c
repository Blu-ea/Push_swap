/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:18:51 by amiguez           #+#    #+#             */
/*   Updated: 2022/02/25 19:54:49 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../p_swap.h"

void	debug_print_stack(t_stacks stacks,char *param)
{
	int	i;

	i = 0;
	if (!ft_strncmp(param, "al",2))
	{
		while (i < stacks.max_len)
		{
			printf("Stack a[%d] = %d\n", i, stacks.a.stack[i]);
			i++;
		}
		i = 0;
		while (i < stacks.max_len)
		{
			printf("Stack b[%d] = %d\n", i, stacks.b.stack[i]);
			i++;
		}
	}
	else if (!ft_strncmp(param, "sa",2))
	{
		while (i < stacks.max_len)
		{
			printf("Stack a[%d] = %d\n", i, stacks.a.stack[i]);
			i++;
		}
	}
	else if (!ft_strncmp(param, "sb",2))
	{
		while (i < stacks.max_len)
		{
			printf("Stack b[%d] = %d\n", i, stacks.b.stack[i]);
			i++;
		}
	}
}

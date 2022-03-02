/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:18:51 by amiguez           #+#    #+#             */
/*   Updated: 2022/03/02 17:09:32 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../p_swap.h"

void	debug_print_stack(t_stacks stacks, char *param)
{
	int	i;

	printf_test(2);
	i = 0;
	if (!ft_strncmp(param, "al", 2))
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
	else if (!ft_strncmp(param, "sa", 2))
	{
		while (i < stacks.max_len)
		{
			printf("Stack a[%d] = %d\n", i, stacks.a.stack[i]);
			i++;
		}
	}
	else if (!ft_strncmp(param, "sb", 2))
	{
		while (i < stacks.max_len)
		{
			printf("Stack b[%d] = %d\n", i, stacks.b.stack[i]);
			i++;
		}
	}
	printf_test(2);
}

void	printf_test(int a)
{
	if (a == 0)
		printf("Ceci est un test pour segfault\n");
	else if (a == 1)
		printf("je suis arriver a la fin de cette parti\n");
	else if (a == 2)
		printf("dans le debug je suis\n");
}

void	tab_print(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		printf("tab[%d] = %s\n", i, tab[i]);
		i++;
	}
}

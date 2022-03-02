/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 08:37:52 by amiguez           #+#    #+#             */
/*   Updated: 2022/03/02 19:27:28 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../p_swap.h"

void	ft_free(t_stacks *stacks)
{
	free (stacks->a.stack);
	free (stacks->b.stack);
}

void	ft_error(int i)
{
	ft_printf(" Error :%d\n", i);
	exit(i);
}

char	**ft_parsec(int argc, char **argv)
{
	char	**ret;
	int		i;

	i = 2;
	if (argc == 1)
		exit(0);
	ret = ft_split_space(argv[1]);
	while (i < argc)
	{
		ret = ft_merge_d_str(ret, ft_split_space(argv[i]));
		i++;
	}
	ft_forbiden_carac(ret);
	return (ret);
}

void	ft_forbiden_carac(char **ret)
{
	int	i;
	int	j;

	i = 0;
	while (ret[i])
	{
		j = 0;
		if (ret[i][j] == '+' || ret[i][j] == '-')
			j = 1;
		while (ret[i][j])
		{
			if (!ft_isdigit(ret[i][j]))
				ft_error(3);
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stacks	p_stacks;

	p_stacks = ft_fill_val(ft_parsec(argc, argv));
	debug_print_stack(p_stacks, "sa");
	ft_free(&p_stacks);
	return (0);
}

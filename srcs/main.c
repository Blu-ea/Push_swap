/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 08:37:52 by amiguez           #+#    #+#             */
/*   Updated: 2022/04/13 07:09:55 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../p_swap.h"

void	ft_free(t_stacks *stacks, int lst)
{
	if (lst != 2)
	{
		free (stacks->a.stack);
		free (stacks->b.stack);
	}
	else
		free (stacks -> a.stack);
}

void	ft_error(int i, t_stacks *lst)
{
	if (i == 12)
		ft_free(lst, 2);
	ft_putstr_fd("Error\n", 2);
	exit(i);
}

char	**ft_parsec(int argc, char **argv, t_stacks *lst)
{
	char	**ret;
	int		i;

	i = 0;
	if (argc == 1)
		exit(0);
	if (!argv[1])
		ft_error(8, lst);
	if (argc == 2)
		ret = ft_split_space(argv[1], lst);
	else
	{
		ret = malloc(sizeof(char *) * (argc));
		if (!ret)
			ft_error(6, lst);
		ret[argc - 1] = 0;
		while (++i < argc)
		{
			if (argv[i][0] == 0)
				ft_error(9, lst);
			ret[i - 1] = argv[i];
		}
	}
	ft_forbiden_carac(ret);
	return (ret);
}

void	ft_forbiden_carac(char **ret)
{
	int			i;
	int			j;
	t_stacks	*dump;

	dump = NULL;
	i = 0;
	while (ret[i])
	{
		j = 0;
		if (ret[i][j] == '+' || ret[i][j] == '-')
			j = 1;
		while (ret[i][j] != '\0')
		{
			if (!ft_isdigit(ret[i][j]))
				ft_error(1, dump);
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stacks	p_stacks;
	char		**list_arg;

	list_arg = ft_parsec(argc, argv, &p_stacks);
	p_stacks = ft_fill_val(list_arg, argc);
	ft_sorting(&p_stacks);
	ft_free(&p_stacks, 1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 08:37:52 by amiguez           #+#    #+#             */
/*   Updated: 2022/02/25 20:02:41 by amiguez          ###   ########.fr       */
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
	write(0, "Error!", 6);
	exit(i);
}

char	**ft_parsec(int argc, char **argv)
{
	char	**ret;

	if (argc == 1)
		ft_error(1);
	if (argc == 2)
		ret = ft_split(argv[1], ' ');
	else
		ret = &argv[1];
	return (ret);
}

//A corriger pour que ca prenne ./push_swap "0 1 2 3 3" 5 6 "123 2"

int	main(int argc, char **argv)
{
	t_stacks	p_stacks;

	p_stacks = ft_fill_val(ft_parsec(argc, argv));
	debug_print_stack(p_stacks, "sa");
	ft_free(&p_stacks);
	return (0);
}

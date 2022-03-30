/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:25:09 by amiguez           #+#    #+#             */
/*   Updated: 2022/03/30 23:38:10 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../p_swap.h"

//1 = tri fini totalement
//2 = tri fini dans la liste a mais pas complet (des restes sont présent dans b))
//0 = tri pas fini

int	ft_is_done_sorting(t_stacks pwap)
{
	int	i;
	int	sorted;

	sorted = 2;
	i = 1;
	if (pwap.a.len == pwap.max_len)
		sorted = 1;
	while (i < pwap.a.len)
	{
		if (pwap.a.stack[i - 1] > pwap.a.stack[i])
			sorted = 0;
		i++;
	}
	return (sorted);
}

void	ft_sorting(t_stacks *pwap)
{
	if (ft_is_done_sorting(*pwap) == 1)
		;
	else if (pwap -> max_len == 2)
		ft_sort2(pwap, 'a');
	else if (pwap -> max_len == 3)
		ft_sort3a(pwap);
	else if (pwap -> max_len == 4)
		ft_sort4(pwap);
	else if (pwap -> max_len == 5)
		ft_sort5(pwap);
	else
		ft_sort_big(pwap);
}

void	ft_sort2(t_stacks *pwap, char list)
{
	if (list == 'a' && pwap -> a.stack[0] > pwap -> a.stack[1])
		ft_swap_a(pwap);
	if (list == 'b' && pwap -> b.stack[0] > pwap -> b.stack[1])
		ft_swap_b(pwap);
}

void	ft_sort3a(t_stacks *pwap)
{
	if (ft_is_done_sorting(*pwap) == 2)
		return ;
	if (pwap -> a.stack[0] == ft_is_min(pwap->a))
	{
		ft_swap_a(pwap);
		ft_rotate_a(pwap);
	}
	else if (pwap -> a.stack[0] != ft_is_min(pwap->a) && pwap -> a.stack[0] != ft_is_max(pwap->a))
	{
		if (pwap -> a.stack[1] == ft_is_min(pwap->a))
			ft_swap_a(pwap);
		else
			ft_reverse_rotate_a(pwap);
	}
	else if (pwap -> a.stack[1] != ft_is_min(pwap->a) && pwap -> a.stack[1] != ft_is_max(pwap->a))
	{
		ft_swap_a(pwap);
		ft_reverse_rotate_a(pwap);
	}
	else
		ft_rotate_a(pwap);
}

void	ft_sort3b(t_stacks *pwap)
{
	if (ft_is_done_sorting(*pwap) == 2)
		return;
	if (pwap -> b.stack[0] == ft_is_min(pwap->b))
	{
		ft_swap_b(pwap);
		ft_rotate_b(pwap);
	}
	else if (pwap -> b.stack[0] != ft_is_min(pwap->b) && pwap -> b.stack[0] != ft_is_min(pwap->b))
	{
		if (pwap -> b.stack[1] == ft_is_min(pwap->b))
			ft_swap_b(pwap);
		else
			ft_reverse_rotate_b(pwap);
	}
	else if (pwap -> b.stack[1] != ft_is_min(pwap->b) && pwap -> b.stack[1] != ft_is_max(pwap->b))
	{
		ft_swap_b(pwap);
		ft_reverse_rotate_b(pwap);
	}
	else
		ft_rotate_b(pwap);
}
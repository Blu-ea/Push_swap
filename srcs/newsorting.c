/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newsorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:58:10 by amiguez           #+#    #+#             */
/*   Updated: 2022/04/07 20:04:24 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../p_swap.h"

void	new_sorting_100(t_stacks *pwap)
{
	int	i;
	int	chunk;

	chunk = pwap->max_len / 11;
	i = 1;
	while (pwap->a.len)
	{
		if (ft_nearestless(chunk * i, pwap -> a) == 1)
			ft_rotate_a(pwap);
		else if (ft_nearestless(chunk * i, pwap -> a) == -1)
			ft_reverse_rotate_a(pwap);
		else
			ft_push_a_to_b(pwap);
		if (ft_chunkvide(pwap -> a, chunk * i) == 0)
			i++;
	}
	while (pwap->b.len)
	{
		if (pwap->b.stack[0] == ft_is_max(pwap->b))
			ft_push_b_to_a(pwap);
		else if (pwap->b.stack[0] == ft_is_max(pwap->b) - 1)
		{
			ft_push_b_to_a(pwap);
			while (pwap->b.stack[0] != ft_is_max(pwap->b))
			{
				if (ft_get_index_max(pwap->b) < pwap->b.len / 2)
					ft_rotate_b(pwap);
				else
					ft_reverse_rotate_b(pwap);
			}
			ft_push_b_to_a(pwap);
			ft_swap_a(pwap);
		}
		else if (ft_get_index_max(pwap->b) < pwap->b.len / 2)
			ft_rotate_b(pwap);
		else
			ft_reverse_rotate_b(pwap);
	}
}

//return the way to get the nearest numbers in the chunk 
//if ret =  1 -> make rotate
//if ret = -1 -> make reverse rotate
//if ret =  0 -> he is on top of a
int	ft_nearestless(int chunk, t_build list)
{
	int	i;
	int	j;

	i = 0;
	j = list.len - 1;
	if (list.stack[i] <= chunk)
		return (0);
	while (list.stack[i] > chunk)
		i++;
	while (list.stack[j] > chunk)
		j++;
	if (i > (list.len - 1) / 2)
		i = (i - list.len) * -1;
	if (j > (list.len - 1) / 2)
		j = (j - list.len) * -1;
	if (i < j)
		return (1);
	return (-1);
}

//return 0 if chunk empty
//retrun 1 if not
int	ft_chunkvide(t_build list, int chunk)
{
	int	i;

	i = 0;
	while (list.stack[i] != -1)
	{
		if (list.stack[i] <= chunk)
			return (1);
		i++;
	}
	return (0);
}
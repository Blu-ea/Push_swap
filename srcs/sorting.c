/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:25:09 by amiguez           #+#    #+#             */
/*   Updated: 2022/03/18 10:04:37 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../p_swap.h"

void	ft_sorting(t_stacks pwap)
{
	if (pwap.max_len == 1)
		exit(0);
	if (pwap.max_len == 2)
		ft_sort2(pwap);
}

void	ft_sort2(t_stacks pwap)
{
	if (pwap.a.stack[0] != 0)
		ft_printf("sa\n");
}
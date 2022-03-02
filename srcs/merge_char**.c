/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_char**.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 19:13:32 by amiguez           #+#    #+#             */
/*   Updated: 2022/03/02 17:37:03 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../p_swap.h"

char	**ft_merge_d_str(char **str1, char **str2)
{
	char	**str_ret;
	int		i;
	int		j;

	j = 0;
	i = 0;
	str_ret = malloc
		(sizeof(char *) * (ft_calc_size(str1) + ft_calc_size(str2) + 1));
	if (!str_ret)
		ft_error(6);
	str_ret[ft_calc_size(str1) + ft_calc_size(str2)] = 0;
	while (i < ft_calc_size(str1))
	{
		str_ret[i] = str1[i];
		i++;
	}
	while (j < ft_calc_size(str2))
	{
		str_ret[i] = str2[j];
		i++;
		j++;
	}
	free(str1);
	free(str2);
	return (str_ret);
}

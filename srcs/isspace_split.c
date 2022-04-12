/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isspace_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:55:40 by amiguez           #+#    #+#             */
/*   Updated: 2022/04/12 03:40:32 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../p_swap.h"

static int	ft_is_charset(char str, char *charset)
{
	while (*charset)
	{
		if (str == *charset)
			return (1);
		charset++;
	}
	return (0);
}

static int	ft_wordlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && ft_is_charset(str[i], charset) == 0)
		i++;
	return (i);
}

static int	ft_wordcount(char *str, char *charset)
{
	int	i;
	int	j;

	j = 0;
	while (*str)
	{
		while (*str && ft_is_charset(*str, charset) == 1)
			str++;
		i = ft_wordlen(str, charset);
		str += i;
		if (i)
			j++;
	}
	return (j);
}

static char	*ft_issstrdupp(char *src, int j, t_stacks *lst)
{
	char	*dst;
	int		i;

	i = 0;
	dst = malloc((j + 1) * sizeof(char));
	if (!dst)
		ft_error(2, lst);
	while (i < j && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	**ft_split_space(char const *s, t_stacks *lst)
{
	char	**dest;
	int		size;
	int		i;
	int		j;
	char	*charset;

	if (!s)
		ft_error(3, lst);
	charset = "\t\n\v\f\r ";
	i = 0;
	size = ft_wordcount((char *)s, charset);
	dest = malloc((size + 1) * sizeof(char *));
	if (!dest)
		ft_error(4, lst);
	while (i < size)
	{
		while (ft_is_charset((char)*s, charset))
			s++;
		j = ft_wordlen((char *)s, charset);
		dest[i++] = ft_issstrdupp((char *)s, j, lst);
		s += j;
	}
	dest[size] = 0;
	return (dest);
}

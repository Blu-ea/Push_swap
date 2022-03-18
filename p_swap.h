/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_swap.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 09:45:05 by amiguez           #+#    #+#             */
/*   Updated: 2022/03/18 10:03:31 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_SWAP_H
# define P_SWAP_H

# include "libft/libft.h"
# include <stdio.h> //printf
# include <stdlib.h> //free
// *************************** //

typedef struct s_build
{
	int	*stack;
	int	len;
}		t_build;

typedef struct s_stacks
{
	t_build	a;
	t_build	b;
	int		max_len;
}		t_stacks;

// *************************** //
//main//

void		ft_error(int i);
char		**ft_parsec(int argc, char **argv);
int			main(int argc, char **argv);
void		ft_forbiden_carac(char **ret);
//fill//

t_stacks	ft_fill_val(char **list_arg);
int			ft_calc_size(char **args);
void		ft_no_double(t_stacks build);
void	ft_set_index(t_stacks *build);

//isspace_split//

char		**ft_split_space(char const *s);
static char	*ft_strdupp(char *src, int j);
static int	ft_wordcount(char *str, char *charset);
static int	ft_wordlen(char *str, char *charset);
static int	ft_is_charset(char str, char *charset);

// //merge_char**//

// char		**ft_merge_d_str(char **str1, char **str2);

//sorting//

void	ft_sorting(t_stacks stacks);

//push//

void		ft_rotate(t_stacks *build, char sens);
void		ft_sort2(t_stacks pwap);

//rotate//

void		ft_rotate(t_stacks *build, char sens);

//swap//

void		ft_swap(t_stacks *build, char sens);

// *************************** //
// *****  DEBUG   ************ //

void		debug_print_stack(t_stacks stacks, char *param);
void		printf_test(int a);
void		tab_print(char **tab);

#endif

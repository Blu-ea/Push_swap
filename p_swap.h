/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_swap.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 09:45:05 by amiguez           #+#    #+#             */
/*   Updated: 2022/04/12 04:05:47 by amiguez          ###   ########.fr       */
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

void		ft_error(int i, t_stacks *lst);
char		**ft_parsec(int argc, char **argv, t_stacks *lst);
int			main(int argc, char **argv);
void		ft_forbiden_carac(char **ret);
void		ft_free(t_stacks *stacks, int lst);

//fill//

t_stacks	ft_fill_val(char **list_arg, int argc);
int			ft_calc_size(char **args);
void		ft_no_double(t_stacks build);
void		ft_set_index(t_stacks *build);
//void		ft_free_list_arg(char **list, int argc);

//isspace_split//

char		**ft_split_space(char const *s, t_stacks *lst);
// static char	*ft_issstrdupp(char *src, int j);
// static int	ft_wordcount(char *str, char *charset);
// static int	ft_wordlen(char *str, char *charset);
// static int	ft_is_charset(char str, char *charset);

//sorting//

int			ft_is_done_sorting(t_stacks pwap);
void		ft_sorting(t_stacks *stacks);
void		ft_sort2(t_stacks *pwap, char list);
void		ft_sort3a(t_stacks *pwap);
void		ft_sort3b(t_stacks *pwap);

//sorting_big//

void		ft_sort4(t_stacks *pwap);
void		ft_sort5(t_stacks *pwap);
void		ft_sort_big(t_stacks *pwap);
void		ft_sorting_big2(t_stacks *pwap);

//calc_position//

int			ft_is_max(t_build list);
int			ft_is_min(t_build list);
void		ft_no_double(t_stacks build);
int			ft_get_index_max(t_build list);
int			ft_get_index_min(t_build list);

//push//

void		ft_push_a_to_b(t_stacks *build);
void		ft_push_b_to_a(t_stacks *build);

//rotate//

void		ft_rotate_a(t_stacks *build);
void		ft_rotate_b(t_stacks *build);
void		ft_rotate_r(t_stacks *build);

//reverse_rotate//

void		ft_reverse_rotate_a(t_stacks *build);
void		ft_reverse_rotate_b(t_stacks *build);
void		ft_reverse_rotate_r(t_stacks *build);

//swap//

void		ft_swap_a(t_stacks *build);
void		ft_swap_b(t_stacks *build);
void		ft_swap_s(t_stacks *build);

//newsorting//

void		new_sorting_100(t_stacks *pwap);
void		ft_newsorting_100_2(t_stacks *pwap);
int			ft_nearestless(int chunk, t_build list);
int			ft_chunkvide(t_build list, int chunk);

// *************************** //
// *****  DEBUG   ************ //

void		debug_print_stack(t_stacks stacks, char *param);
void		printf_test(int a);
void		tab_print(char **tab);

#endif

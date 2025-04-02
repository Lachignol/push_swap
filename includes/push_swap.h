/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:01:33 by ascordil          #+#    #+#             */
/*   Updated: 2024/12/24 16:39:54 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define  PUSH_SWAP_H
# include <stdlib.h>
# include "libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# define _BHMIN_  "0123456789abcdef"
# define _BHMAJ_  "0123456789ABCDEF"

typedef struct s_list
{
	int				index;
	int				pos;
	int				value;
	int				push_operate;
	int				before_middle;
	struct s_list	*target;
	struct s_list	*prev;
	struct s_list	*next;
}		t_list;

int		add_to_front_list(t_list **list, void *value);
int		sort_distrib_split(char **numbers, int flag);
int		is_only_spc(char *str);
void	free_tab(char **tab);
t_list	*init_node(int number);
t_list	*get_optimal_element(t_list *stack);
int		nbr_operate_for_push_a(t_list *stack_a, t_list *stack_b);
int		rtrn_int_and_cntrl(const char *theString, int *error);
int		polish_cost_dbl_mv_afmdl(t_list *stack_1, int length_1, int length_2);
int		polish_cost_dbl_mv_bfmdl(t_list *stack_1);
int		push_2_element_in_b(t_list **stack_a, t_list **stack_b);
int		optmize_double_mouvement(t_list **a, t_list **b, t_list *opti);
int		align_value_for_push_in_b(t_list **a, t_list **b, t_list *opti);
int		align_value_for_push_in_a(t_list **a, t_list **b, t_list *opti);
int		final_sort(t_list **stack_a);
int		push_all_element_in_b_while_a_equal_three_and_sort(t_list **a,
			t_list **b);
int		push_all_element_in_a_and_little_sort(t_list **a, t_list **b);
int		full_sort(t_list **stack_a, t_list **stack_b);
int		reset_all_pos(t_list **stack_a, t_list **stack_b);
int		set_target_value_min(t_list *stack_a, t_list *stack_b);
int		set_target_value_max(t_list *stack_a, t_list *stack_b);
int		sort_three(t_list **stack);
int		full_sort(t_list **stack_a, t_list **stack_b);
int		sort_two(t_list **stack_a);
int		sort_distrib(char **numbers, int flag);
int		is_sorted(t_list *list);
int		set_pos(t_list **list);
int		index_list(t_list **list);
t_list	*get_max(t_list *list);
t_list	*get_min(t_list *list);
int		add_to_back_list(t_list **list, void *number);
int		swap(t_list **list);
int		push(t_list **src, t_list **dest);
int		len_list(t_list *list);
int		rotate(t_list **list);
int		reverse_rotate(t_list **list);
int		check_integrity(char **numbers, int flag, char *arg1);
t_list	*init_list(void);
void	print_list(t_list *list);
void	print_two_list(t_list *list1, t_list *list2);
int		init_stack(t_list **stack, char	**numbers, int count);
void	handle_error(char **numbers);
void	test(t_list **stack_a, t_list **stack_b);
int		free_list(t_list **list);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);
void	pa(t_list	**stack_b, t_list **stack_a);
void	pb(t_list	**stack_a, t_list **stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);

#endif

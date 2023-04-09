/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <afaqir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 03:42:50 by afaqir            #+#    #+#             */
/*   Updated: 2023/04/09 18:20:52 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
}	t_stack;

typedef struct s_help
{
	t_stack	*t;
	int		index;
	int		count;
	int		mid;
	int		offset;
	int		start;
	int		end;
}	t_help;

typedef struct s_help2
{
	int		down;
	t_stack	*tmp;
}	t_help2;

t_stack	*ft_lstnew(int content);

void	sa(t_stack **a);
void	sb(t_stack **b);

void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

void	checker_sa(t_stack **a);
void	checker_sb(t_stack **b);

void	checker_ss(t_stack **a, t_stack **b);
void	checker_pa(t_stack **a, t_stack **b);
void	checker_pb(t_stack **a, t_stack **b);
void	checker_ra(t_stack **a);
void	checker_rb(t_stack **b);
void	checker_rr(t_stack **a, t_stack **b);
void	checker_rra(t_stack **a);
void	checker_rrb(t_stack **b);
void	checker_rrr(t_stack **a, t_stack **b);

int		ft_printf(const char *s, ...);
char	**ft_split(char const *s, char c);
long	ft_atoi(const char *str);

int		ft_numbers_count(t_stack *a);
void	ft_sort(t_stack **a, t_stack **b);

void	ft_full_stack(t_stack **a, int argc, char **argv);
int		is_sorted(t_stack **a);
void	ft_free(char **str);
void	free_stack(t_stack **a);
int		ft_isdigit(int c);
int		push(t_stack **a, int value);
void	ft_check_args(int argc, char **argv);
void	ft_sort_3(t_stack **a);
void	ft_sort_4(t_stack **a, t_stack **b);
void	ft_sort_5(t_stack **a, t_stack **b);
int		ft_check_comp(t_stack *t);
int		ft_check_comp2(t_stack *t);
int		ft_check_comp3(t_stack *t);
void	ft_new_algo(t_stack **a, t_stack **b);
void	update_values(int *start, int *end, int *index, int *count);
void	ft_make_decision(t_stack **a, int *index, int mid);
void	ft_fill_sort(int *sort, t_stack **a);
void	ft_sorted(int *sort, int size);
int		ft_set_variables(int *mid, int *offset, t_stack **a, int *end);
int		ft_update_offset(int count);
int		ft_b_hasmax(t_stack **b, int max);
int		get_index(t_stack **b, int max);
void	push_from_b_to_a(t_stack **a, t_stack **b, int *arr, int *size);
void	ft_push_from_a_to_b(t_stack **a, t_stack **b, int *arr);
void	ft_make_this_decision(t_stack **a, t_stack **b, int *sort, int mid);
void	ft_do_this(t_stack **b, int *sort, int size);
void	ft_do_rra(t_stack **a, int *down, int *size);
void	ft_pa_ra(t_stack **a, t_stack **b, int *down);
void	ft_do_pa(t_stack **a, t_stack **b, int *down);
void	ft_do_pa_size(t_stack **a, t_stack **b, int *size);
t_stack	*ft_last_node(t_stack *a);
char	*get_next_line(int fd);
void	ft_error(void);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

#endif

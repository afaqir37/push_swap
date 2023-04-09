/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <afaqir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 03:29:32 by afaqir            #+#    #+#             */
/*   Updated: 2023/04/09 08:44:38 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a)
{
	t_stack	*t;
	t_stack	*prev;
	int		tmp;

	if (!(*a) || !((*a)->next))
		return ;
	t = *(a);
	prev = t->next;
	tmp = t->content;
	t->content = prev->content;
	prev->content = tmp;
	write(1, "sa\n", 3);
}

void	sb(t_stack **b)
{
	t_stack	*t;
	t_stack	*prev;
	int		tmp;

	if (!(*b) || !((*b)->next))
		return ;
	t = *(b);
	prev = t->next;
	tmp = t->content;
	t->content = prev->content;
	prev->content = tmp;
	write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b)
{
	sa(a);
	sb(b);
	write(1, "ss\n", 3);
}

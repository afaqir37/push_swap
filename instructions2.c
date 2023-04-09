/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <afaqir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 03:25:30 by afaqir            #+#    #+#             */
/*   Updated: 2023/04/07 06:12:28 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_stack **a, t_stack **b)
{
	ra(a);
	rb(b);
	write(1, "ra\n", 3);
}

void	rra(t_stack **a)
{
	t_stack	*t;
	t_stack	*prev;

	if (!(*a) || !((*a)->next))
		return ;
	t = *a;
	prev = NULL;
	while (t->next)
	{
		prev = t;
		t = t->next;
	}
	t->next = *a;
	prev->next = NULL;
	*a = t;
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	t_stack	*t;
	t_stack	*prev;

	if (!(*b) || !((*b)->next))
		return ;
	t = *b;
	prev = NULL;
	while (t->next)
	{
		prev = t;
		t = t->next;
	}
	t->next = *b;
	prev->next = NULL;
	*b = t;
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
}

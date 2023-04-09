/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst_checker2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <afaqir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 03:25:30 by afaqir            #+#    #+#             */
/*   Updated: 2023/04/09 18:32:39 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	checker_rr(t_stack **a, t_stack **b)
{
	checker_ra(a);
	checker_rb(b);
}

void	checker_rra(t_stack **a)
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
}

void	checker_rrb(t_stack **b)
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
}

void	checker_rrr(t_stack **a, t_stack **b)
{
	checker_rra(a);
	checker_rrb(b);
}

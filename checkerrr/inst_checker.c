/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <afaqir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 03:18:30 by afaqir            #+#    #+#             */
/*   Updated: 2023/04/09 18:49:19 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	checker_pa(t_stack **a, t_stack **b)
{
	t_stack	*t;

	if (!(*b))
		return ;
	if (!(*a))
	{
		(*a) = ft_lstnew((*b)->content);
		t = *b;
		*b = t->next;
		free(t);
		return ;
	}
	t = *b;
	*b = t->next;
	t->next = *a;
	*a = t;
}

void	checker_pb(t_stack **a, t_stack **b)
{
	t_stack	*t;

	if (!(*a))
		return ;
	if (!(*b))
	{
		(*b) = ft_lstnew((*a)->content);
		t = *a;
		*a = t->next;
		free(t);
		return ;
	}
	t = *a;
	*a = t->next;
	t->next = *b;
	*b = t;
}

void	checker_ra(t_stack **a)
{
	t_stack	*t;
	t_stack	*save;

	if (!(*a) || !((*a)->next))
		return ;
	t = *a;
	save = t;
	*a = t->next;
	while (t->next)
		t = t->next;
	t->next = save;
	save->next = NULL;
}

void	checker_rb(t_stack **b)
{
	t_stack	*t;
	t_stack	*save;

	if (!(*b) || !((*b)->next))
		return ;
	t = *b;
	save = t;
	*b = t->next;
	while (t->next)
		t = t->next;
	t->next = save;
	save->next = NULL;
}

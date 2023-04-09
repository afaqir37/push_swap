/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <afaqir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 03:18:30 by afaqir            #+#    #+#             */
/*   Updated: 2023/04/09 08:43:25 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **a, t_stack **b)
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
		write(1, "pa\n", 3);
		return ;
	}
	t = *b;
	*b = t->next;
	t->next = *a;
	*a = t;
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
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
		write(1, "pb\n", 3);
		return ;
	}
	t = *a;
	*a = t->next;
	t->next = *b;
	*b = t;
	write(1, "pb\n", 3);
}

void	ra(t_stack **a)
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
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
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
	write(1, "rb\n", 3);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushing_to_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <afaqir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 03:47:25 by afaqir            #+#    #+#             */
/*   Updated: 2023/04/09 08:45:15 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstnew(int content)
{
	t_stack	*p;

	p = malloc(sizeof(t_stack));
	if (!p)
		return (NULL);
	p->content = content;
	p->next = NULL;
	return (p);
}

int	push(t_stack **a, int value)
{
	t_stack	*t;
	t_stack	*new;

	if (!(*a))
	{
		*a = ft_lstnew(value);
		if (!*a)
			return (0);
		return (1);
	}
	t = *a;
	new = ft_lstnew(value);
	if (!new)
		return (0);
	while (t->next)
		t = t->next;
	t->next = new;
	return (1);
}

void	pop(t_stack **a)
{
	t_stack	*t;
	t_stack	*prev;

	if (!*a)
		return ;
	t = *a;
	prev = NULL;
	while (t->next)
	{
		prev = t;
		t = t->next;
	}
	if (!prev)
		*a = NULL;
	else
		prev->next = NULL;
	free(t);
}

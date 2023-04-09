/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst_checker3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <afaqir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 03:29:32 by afaqir            #+#    #+#             */
/*   Updated: 2023/04/09 18:32:48 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	checker_sa(t_stack **a)
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
}

void	checker_sb(t_stack **b)
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
}

void	checker_ss(t_stack **a, t_stack **b)
{
	checker_sa(a);
	checker_sb(b);
}

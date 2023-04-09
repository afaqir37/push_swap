/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_short.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <afaqir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 02:25:32 by afaqir            #+#    #+#             */
/*   Updated: 2023/04/09 08:52:27 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_min_position_from0(t_stack **a)
{
	t_stack	*tmp;
	int		min;
	int		min_position;

	tmp = *a;
	min = tmp->content;
	min_position = 0;
	while (tmp)
	{
		if (tmp->content < min)
			min = tmp->content;
		tmp = tmp->next;
	}
	tmp = *a;
	while (tmp)
	{
		if (tmp->content == min)
			return (min_position);
		min_position++;
		tmp = tmp->next;
	}
	return (min_position);
}

void	ft_sort_3(t_stack **a)
{
	if (ft_check_comp2(*a))
	{
		if ((*a)->next->content > (*a)->next->next->content)
		{
			rra(a);
			sa(a);
		}
	}
	else if (ft_check_comp((*a)))
	{
		if ((*a)->content > (*a)->next->next->content)
			ra(a);
		else
			sa(a);
	}
	else if (ft_check_comp3((*a)))
	{
		if ((*a)->content < (*a)->next->content)
			rra(a);
		else
		{
			ra(a);
			sa(a);
		}
	}
}

void	ft_sort_4(t_stack **a, t_stack **b)
{
	int	min_position;

	min_position = ft_get_min_position_from0(a);
	if (min_position == 1)
		sa(a);
	else if (min_position == 2)
	{
		ra(a);
		ra(a);
	}
	else if (min_position == 3)
		rra(a);
	pb(a, b);
	ft_sort_3(a);
	pa(a, b);
}

void	ft_sort_5(t_stack **a, t_stack **b)
{
	int	min_position;

	min_position = ft_get_min_position_from0(a);
	if (min_position == 1)
		sa(a);
	else if (min_position == 2)
	{
		ra(a);
		ra(a);
	}
	else if (min_position == 3)
	{
		rra(a);
		rra(a);
	}
	else if (min_position == 4)
		rra(a);
	pb(a, b);
	ft_sort_4(a, b);
	pa(a, b);
}

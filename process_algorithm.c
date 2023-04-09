/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_algorithm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <afaqir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 11:01:09 by afaqir            #+#    #+#             */
/*   Updated: 2023/04/09 15:07:40 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	update_values(int *start, int *end, int *index, int *count)
{
	int	offset;

	offset = ft_update_offset(*count);
	(*start) = (*start) - offset;
	if (*start < 0)
		(*start) = 0;
	(*end) = (*end) + offset;
	if ((*end) > *count - 1)
		(*end) = *count - 1;
	*index = 0;
}

void	ft_make_decision(t_stack **a, int *index, int mid)
{
	mid = ft_numbers_count(*a);
	if ((*index) <= mid / 2)
	{
		while ((*index))
		{
			ra(a);
			(*index)--;
		}
	}
	else
	{
		(*index) = mid - (*index);
		while ((*index))
		{
			rra(a);
			(*index)--;
		}
	}
}

void	ft_make_this_decision(t_stack **a, t_stack **b, int *sort, int mid)
{
	pb(a, b);
	if ((*b)->content < sort[mid])
		rb(b);
}

void	ft_do_this(t_stack **b, int *sort, int size)
{
	int	id;
	int	mid;

	id = get_index(b, sort[size -1]);
	mid = ft_numbers_count(*b) / 2;
	if (id > mid)
		rrb(b);
	else
		rb(b);
}

void	ft_do_rra(t_stack **a, int *down, int *size)
{
	rra(a);
	(*down)--;
	(*size)--;
}

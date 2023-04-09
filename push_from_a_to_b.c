/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_from_a_to_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <afaqir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 11:10:54 by afaqir            #+#    #+#             */
/*   Updated: 2023/04/09 15:08:49 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_from_a_to_b(t_stack **a, t_stack **b, int *arr)
{
	t_help	norm;

	norm.count = ft_numbers_count(*a);
	norm.index = 0;
	norm.start = ft_set_variables(&norm.mid, &norm.offset, a, &norm.end);
	while (*a)
	{
		norm.t = *a;
		if (norm.t->content >= arr[norm.start]
			&& norm.t->content <= arr[norm.end])
			ft_make_this_decision(a, b, arr, norm.mid);
		else
		{
			while (norm.t && !(norm.t->content >= arr[norm.start]
					&& norm.t->content <= arr[norm.end]))
			{
				norm.index++;
				norm.t = norm.t->next;
			}
			if (!norm.t)
				update_values(&norm.start, &norm.end, &norm.index, &norm.count);
			else
				ft_make_decision(a, &norm.index, norm.mid);
		}
	}
}

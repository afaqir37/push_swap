/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_from_b_to_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <afaqir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 11:16:57 by afaqir            #+#    #+#             */
/*   Updated: 2023/04/09 13:44:52 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_from_b_to_a(t_stack **a, t_stack **b, int *arr, int *size)
{
	t_help2	normi;

	while (*b || *size >= 1)
	{
		if (ft_b_hasmax(b, arr[*size - 1]))
		{
			if ((*b)->content == arr[*size - 1])
				ft_do_pa_size(a, b, size);
			else
			{
				if (!(*a))
					ft_do_pa(a, b, &normi.down);
				else
				{
					normi.tmp = ft_last_node(*a);
					if ((*b)->content > normi.tmp->content || normi.down == 0)
						ft_pa_ra(a, b, &normi.down);
					else
						ft_do_this(b, arr, *size);
				}
			}
		}
		else
			ft_do_rra(a, &normi.down, size);
	}
}

t_stack	*ft_last_node(t_stack *a)
{
	t_stack	*tmp;

	tmp = a;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

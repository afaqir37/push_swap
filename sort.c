/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <afaqir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 04:49:24 by afaqir            #+#    #+#             */
/*   Updated: 2023/04/08 08:43:51 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_stack **a, t_stack **b)
{
	t_stack	*t;
	int		count;

	t = *a;
	count = ft_numbers_count(t);
	if (count == 1)
		return ;
	else if (count == 2)
		sa(a);
	else if (count == 3)
		ft_sort_3(a);
	else if (count == 4)
		ft_sort_4(a, b);
	else if (count == 5)
		ft_sort_5(a, b);
	else
		ft_new_algo(a, b);
}

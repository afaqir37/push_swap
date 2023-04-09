/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_algorithm.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <afaqir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 10:55:07 by afaqir            #+#    #+#             */
/*   Updated: 2023/04/09 14:59:35 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_update_offset(int count)
{
	if (count <= 8)
		return (2);
	else if (count <= 50)
		return (6);
	else if (count <= 100)
		return (12);
	else if (count <= 200)
		return (20);
	else if (count <= 300)
		return (25);
	else
		return (30);
}

int	ft_b_hasmax(t_stack **b, int max)
{
	t_stack	*t;

	if (!(*b))
		return (0);
	t = *b;
	while (t)
	{
		if (t->content == max)
			return (1);
		t = t->next;
	}
	return (0);
}

int	get_index(t_stack **b, int max)
{
	t_stack	*t;
	int		index;

	t = *b;
	index = 0;
	while (t)
	{
		if (t->content == max)
			return (index);
		index++;
		t = t->next;
	}
	return (-1);
}

void	ft_new_algo(t_stack **a, t_stack **b)
{
	int	count;
	int	*sort;

	count = ft_numbers_count(*a);
	sort = malloc(sizeof(int) * count);
	if (!sort)
	{
		free_stack(a);
		exit(1);
	}
	ft_fill_sort(sort, a);
	ft_sorted(sort, count);
	ft_push_from_a_to_b(a, b, sort);
	push_from_b_to_a(a, b, sort, &count);
	free(sort);
}

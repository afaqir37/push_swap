/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <afaqir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 09:08:23 by afaqir            #+#    #+#             */
/*   Updated: 2023/04/09 15:00:39 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_fill_sort(int *sort, t_stack **a)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = *a;
	while (tmp)
	{
		sort[i] = tmp->content;
		i++;
		tmp = tmp->next;
	}
}

void	ft_sorted(int *sort, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (sort[i] > sort[j])
			{
				tmp = sort[i];
				sort[i] = sort[j];
				sort[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	ft_set_variables(int *mid, int *offset, t_stack **a, int *end)
{
	int	count;
	int	start;

	count = ft_numbers_count(*a);
	if (count % 2 == 0)
		*mid = count / 2 - 1;
	else
		*mid = count / 2;
	*offset = ft_update_offset(count);
	*end = *mid + *offset;
	if (*end > count - 1)
		*end = count - 1;
	start = *mid - *offset;
	if (start < 0)
		start = 0;
	return (start);
}

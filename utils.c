/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 04:52:17 by afaqir            #+#    #+#             */
/*   Updated: 2023/04/07 04:55:36 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack **a)
{
	t_stack	*tmp;

	tmp = *a;
	while (tmp && tmp->next)
	{
		if (tmp->content > tmp->next->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	free_stack(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*save;

	tmp = *a;
	while (tmp)
	{
		save = tmp;
		tmp = tmp->next;
		free(save);
	}
}

int	ft_numbers_count(t_stack *a)
{
	int	counter;

	counter = 0;
	while (a)
	{
		counter++;
		a = a->next;
	}
	return (counter);
}

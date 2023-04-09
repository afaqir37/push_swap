/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_process_algo.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <afaqir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 11:19:22 by afaqir            #+#    #+#             */
/*   Updated: 2023/04/09 11:22:36 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa_ra(t_stack **a, t_stack **b, int *down)
{
	pa(a, b);
	ra(a);
	(*down)++;
}

void	ft_do_pa(t_stack **a, t_stack **b, int *down)
{
	pa(a, b);
	(*down)++;
}

void	ft_do_pa_size(t_stack **a, t_stack **b, int *size)
{
	pa(a, b);
	(*size)--;
}

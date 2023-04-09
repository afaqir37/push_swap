/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_normkill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 02:14:29 by afaqir            #+#    #+#             */
/*   Updated: 2023/04/07 02:19:26 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_comp(t_stack *t)
{
	if (t->next->content < t->content
		&& t->next->content < t->next->next->content)
		return (1);
	else
		return (0);
}

int	ft_check_comp2(t_stack *t)
{
	if (t->content < t->next->content
		&& t->content < t->next->next->content)
		return (1);
	else
		return (0);
}

int	ft_check_comp3(t_stack *t)
{
	if (t->next->next->content < t->content
		&& t->next->next->content < t->next->content)
		return (1);
	else
		return (0);
}

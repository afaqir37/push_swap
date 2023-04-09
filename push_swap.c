/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <afaqir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 03:40:03 by afaqir            #+#    #+#             */
/*   Updated: 2023/04/09 11:27:35 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;

	if (argc == 1)
		return (-1);
	ft_check_args(argc, argv);
	ft_full_stack(&a, argc, argv);
	if (is_sorted(&a))
	{
		free_stack(&a);
		return (0);
	}
	ft_sort(&a, &b);
	free_stack(&a);
}

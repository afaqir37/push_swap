/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <afaqir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:20:30 by afaqir            #+#    #+#             */
/*   Updated: 2023/04/07 03:33:42 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct skyler {
	size_t				i;
	int					sign;
	unsigned long long	result;
}	t_need;

long	ft_atoi(const char *str)
{
	t_need	x;

	x.sign = 1;
	x.result = 0;
	x.i = 0;
	while (str[x.i] == 32 || (str[x.i] >= 9 && str[x.i] <= 13))
		x.i++;
	if (str[x.i] == '-')
	{
		x.sign = -1;
		x.i++;
	}
	else if (str[x.i] == '+')
		x.i++;
	while (str[x.i] >= '0' && str[x.i] <= '9')
	{
		x.result = x.result * 10 + str[x.i] - '0';
		x.i++;
	}
	return (x.result * x.sign);
}

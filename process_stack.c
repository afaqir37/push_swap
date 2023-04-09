/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 03:35:50 by afaqir            #+#    #+#             */
/*   Updated: 2023/04/07 03:39:45 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_pushtostack(t_stack **a, char **argv)
{
	char	**s;
	int		j;

	j = 0;
	s = ft_split(argv[1], ' ');
	if (!s)
	{
		ft_free(s);
		exit(1);
	}
	while (s[j])
	{
		if (!push(a, ft_atoi(s[j])))
		{
			free_stack(a);
			ft_free(s);
			exit(1);
		}
		j++;
	}
	return (s);
}

void	ft_full_stack(t_stack **a, int argc, char **argv)
{
	char	**s;
	int		i;

	if (argc == 2)
		s = ft_pushtostack(a, argv);
	else
	{
		i = 1;
		while (i < argc)
		{
			if (!push(a, ft_atoi(argv[i])))
			{
				free_stack(a);
				exit(1);
			}
			i++;
		}
	}
	if (argc == 2)
		ft_free(s);
}

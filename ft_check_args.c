/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <afaqir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 02:07:02 by afaqir            #+#    #+#             */
/*   Updated: 2023/04/07 05:47:53 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	ft_checkdup(int num, char **argv, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	if (!num[i])
		return (0);
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

char	**ft_use_split(char **argv)
{
	char	**t;

	t = ft_split(argv[1], ' ');
	if (!t)
	{
		ft_free(t);
		exit(1);
	}
	return (t);
}

void	ft_check_args(int argc, char **argv)
{
	int		i;
	char	**args;
	long	tmp;

	i = 0;
	if (argc == 2)
		args = ft_use_split(argv);
	else
	{
		args = argv;
		i = 1;
	}
	while (args[i])
	{
		tmp = ft_atoi(args[i]);
		if (ft_checkdup(tmp, args, i))
			ft_error();
		if (!(ft_isnum(args[i])))
			ft_error();
		if (tmp < -2147483648 || tmp > 2147483647)
			ft_error();
		i++;
	}
	if (argc == 2)
		ft_free(args);
}

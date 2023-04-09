/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <afaqir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:57:02 by afaqir            #+#    #+#             */
/*   Updated: 2023/02/03 17:04:06 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_checkarg(char c, va_list ap, int *len)
{
	if (c == 'c')
		ft_putchar(va_arg(ap, int), len);
	if (c == 's')
		ft_putstr(va_arg(ap, char *), len);
	if (c == 'i' || c == 'd')
		ft_putnbr(va_arg(ap, int), len);
	if (c == 'X')
		ft_tobighex(va_arg(ap, unsigned int), len);
	if (c == 'x')
		ft_tohex(va_arg(ap, unsigned int), len);
	if (c == 'p')
		ft_putptr(va_arg(ap, unsigned long long), len);
	if (c == 'u')
		ft_put_unsigned(va_arg(ap, unsigned int), len);
	if (c == '%')
		ft_putchar('%', len);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		len;

	len = 0;
	va_start(ap, s);
	while (*s)
	{
		if (*s == '%')
		{
			ft_checkarg(*++s, ap, &len);
		}
		else
			ft_putchar(*s, &len);
		s++;
	}
	va_end(ap);
	return (len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <afaqir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:13:02 by afaqir            #+#    #+#             */
/*   Updated: 2023/04/05 21:23:30 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*ft_lstnew(void *content)
{
	t_stack	*p;

	p = malloc(sizeof(t_stack));
	if (!p)
		return (NULL);
	p->content = content;
	p->next = NULL;
	return (p);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktjhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 07:24:57 by ktjhan            #+#    #+#             */
/*   Updated: 2017/12/06 07:25:06 by ktjhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*a;
	t_list	*b;
	t_list	*c;

	c = NULL;
	while (lst)
	{
		b = malloc(sizeof(size_t));
		if (!b)
			return (NULL);
		b = f(lst);
		if (!c)
		{
			c = b;
			a = b;
		}
		else
		{
			a->next = b;
			a = a->next;
		}
		lst = lst->next;
	}
	return (c);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktjhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 07:27:42 by ktjhan            #+#    #+#             */
/*   Updated: 2017/12/06 07:28:00 by ktjhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*a;

	a = malloc(sizeof(t_list));
	if (a)
	{
		if (content == NULL)
		{
			a->content_size = 0;
			a->content = NULL;
		}
		else
		{
			a->content_size = content_size;
			if (!(a->content = ft_memalloc(a->content_size)))
				return (NULL);
			a->content = ft_memcpy(a->content, content, a->content_size);
		}
		a->next = NULL;
	}
	return (a);
}

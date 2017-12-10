/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktjhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 07:19:49 by ktjhan            #+#    #+#             */
/*   Updated: 2017/12/06 07:20:18 by ktjhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *a;
	t_list *b;

	b = *alst;
	if (!b)
		return ;
	while (b)
	{
		a = b->next;
		del(b->content, b->content_size);
		free(b);
		b = a;
	}
	*alst = NULL;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktjhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 07:30:42 by ktjhan            #+#    #+#             */
/*   Updated: 2017/12/06 07:31:24 by ktjhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *a;
	char *b;

	a = (char *)src;
	b = (char *)dst;
	while (n--)
	{
		*b = *a;
		b++;
		if (*a == (char)c)
			return ((void *)b);
		a++;
	}
	return (NULL);
}

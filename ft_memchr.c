/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktjhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 07:32:31 by ktjhan            #+#    #+#             */
/*   Updated: 2017/12/06 07:32:38 by ktjhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	unsigned int	i;

	a = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (a[i] == (unsigned char)c)
			return ((void *)&a[i]);
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktjhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 07:39:15 by ktjhan            #+#    #+#             */
/*   Updated: 2017/12/06 07:39:34 by ktjhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char*)dst;
	b = (unsigned char*)src;
	i = 0;
	if (src > dst)
		while (i < len)
		{
			a[i] = b[i];
			i++;
		}
	else
		while (len > 0)
		{
			len--;
			a[len] = b[len];
		}
	return (dst);
}

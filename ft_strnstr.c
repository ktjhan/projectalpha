/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktjhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 08:29:45 by ktjhan            #+#    #+#             */
/*   Updated: 2017/12/06 08:29:47 by ktjhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t l)
{
	size_t	i;
	size_t	a;

	i = 0;
	if (big[i] == little[i] && big[i] == '\0')
		return ((char*)&big[i]);
	while (big[i] != '\0' && i <= l)
	{
		a = i;
		while (big[a] == little[a - i] && big[a] != '\0' && a < l)
			a++;
		if (little[a - i] == '\0')
		{
			return ((char*)&big[i]);
		}
		i++;
	}
	return (NULL);
}

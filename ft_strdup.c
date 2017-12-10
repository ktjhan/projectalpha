/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktjhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 08:19:24 by ktjhan            #+#    #+#             */
/*   Updated: 2017/12/06 08:25:48 by ktjhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *i;

	i = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (i == NULL)
		return (NULL);
	ft_strcpy(i, s1);
	return (i);
}

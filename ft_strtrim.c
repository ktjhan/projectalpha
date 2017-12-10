/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktjhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 08:33:17 by ktjhan            #+#    #+#             */
/*   Updated: 2017/12/06 08:33:22 by ktjhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	a;
	unsigned int	b;
	char			*str;

	i = 0;
	b = 0;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return (ft_strcpy(ft_memalloc(sizeof(char) * 2), ""));
	a = ft_strlen(s) - 1;
	while (s[a] == ' ' || s[a] == '\n' || s[a] == '\t')
		a--;
	if (!(str = (char *)malloc(sizeof(char) * (a - i + 2))))
		return (NULL);
	while (b < a - i + 1)
	{
		str[b] = s[i + b];
		b++;
	}
	str[b] = '\0';
	return (str);
}

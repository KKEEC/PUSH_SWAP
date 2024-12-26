/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:43:50 by kkc               #+#    #+#             */
/*   Updated: 2024/11/18 15:24:23 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sstr;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	sstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!sstr)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			sstr[j] = s[i];
			j++;
		}
		i++;
	}
	sstr[j] = '\0';
	return (sstr);
}

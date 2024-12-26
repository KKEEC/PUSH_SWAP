/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:42:41 by kkc               #+#    #+#             */
/*   Updated: 2024/11/13 10:27:56 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countsubstr(char const *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	substrl;
	size_t	i;

	result = (char **)malloc((ft_countsubstr(s, c) + 1) * sizeof(char *));
	if (!s || !result)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				substrl = ft_strlen(s);
			else
				substrl = ft_strchr(s, c) - s;
			result[i++] = ft_substr(s, 0, substrl);
			s += substrl;
		}
	}
	result[i] = NULL;
	return (result);
}

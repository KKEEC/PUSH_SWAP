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
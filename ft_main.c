/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 12:57:29 by kkc               #+#    #+#             */
/*   Updated: 2024/12/20 14:46:15 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#include "libft.h"
#include "ft_split.c"
#include "ft_strchr.c"
#include "ft_strlen.c"
#include "ft_substr.c"

static int	ft_strisnum(const char *str)
{
	int	i;
	int	signcount;

	i = 0;
	signcount = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		signcount++;
		i++;
	}
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

static int	ft_isint(long nbr)
{
	if (nbr >= -2147483648 && nbr <= 2147483647)
		return (1);
	else
		return (0);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		ins;
	int		*a;
	int		sizea;
	long	value;

	i = 1;
	ins = 0;
	value = 0;
	sizea = argc - 1; 
	//a = malloc(sizeof(int) * sizea);
	//if (!a)
	//	return (0);
	printf("nummber of args excluding name is: %d \n", sizea);
	if (argc == 2)
	{
		char **strs = ft_split(argv[1], ' ');
		char **temp = strs;

		while(*strs != NULL)
		{
			printf("%s \n", *strs);
			strs++;
		}
		strs = temp;
		while(*strs != NULL) 
		{
			free(*strs);
			strs++;
		}
		free(temp);
	}
	/*
	while (i < argc)
	{
		if (ft_strisnum(argv[i]) == 1)
		{
			value = ft_atol(argv[i]);
			if (ft_isint(value) == 1)
			{
				a[ins] = (int)value;
				printf("argv[%d]: %lu: a[%d]: %d \n", i, value, ins, a[ins]);
			}
			else
			{
				free (a);
				return (printf("Argument %d is not a valid integer", i));
			}
			i++;
			ins++;
		}
		else
		{
			printf("freeing malloc...\n");
			free (a);
			return (printf("Argument %d is not a valid", i));
		}
	}
	i = 0;
	while (i < sizea)
	{
		printf("index: %d == %d\n", i, a[i]);
		i++;
	}
	*/
	//free(a);
	return (0);
}

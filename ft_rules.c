/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 12:57:29 by kkc               #+#    #+#             */
/*   Updated: 2024/12/19 13:04:49 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

static int ft_strisnum(const char *str)
{
	int	len;
	int i;
	int signcount;

	len = 0;
	i = 0;
	signcount = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
		{	
			signcount += 1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
			i++;
		if (str[i] == '-' || str[i] == '+')
			return 0;
		else
			return 0;
			
	}
	if (signcount == 1 || signcount == 0)
		return (1);
	else    
		return (0);
}

int	ft_atoi(const char *str)
{
	long	nbr;
	long	neg;
	long	i;

	nbr = 0;
	neg = 1;
	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		nbr = nbr * 10 + (str[i] - 48);
		i++;
	}
	return ((int)(nbr * neg));
}



int main (int argc, char *argv[])
{
	int	i;
	int ins;
	int	*a;
	int sizea;

	sizea = argc - 1;
	i = 1;
	ins = 0;
	a = malloc(sizeof(int) * sizea);
	if (!a)
		return 0;
	printf("nummber of args excluding name is: %d \n", sizea);
	while(i < argc)
	{
		if (ft_strisnum(argv[i]) == 1)
		{
			a[ins] = ft_atoi(argv[i]);
			printf("the numbers are argv[%d]: %d: a[%d]: %d \n", i, ft_atoi(argv[i]), ins, a[ins]);
			//printf("the numbers are %d:  %d \n", i, a[i]);
			i++;
			ins++;
		}
		else
		{
			free(a);
			return printf("please input only numbers");
		}
			
	}
	int j;
	j = 0;
	while (j < sizea)
	{
		printf("indes: %d == %d\n",j,  a[j]);
		j++;
	}
	free(a);
	return 0;
}

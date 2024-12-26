long	ft_atol(const char *str)
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
	return ((nbr * neg));
}
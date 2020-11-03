static	int	digits(int	n)
{
	int	i;

	i = 0;
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static char	*neg_itoa(int n)
{
	int		len;
	char	*result;

	if (n == 0)
		return ("0");
	if (n == -2147483648)
		return ("-2147483648");
	n = n * -1;
	len = digits(n) + 1;
	result = malloc(len + 1);
	result[len] = 0;
	result[0] = '-';
	while(n)
	{
		len--;
		result[len] = n % 10 + '0';
		n = n / 10;
	}
	return (result);
}

char		*ft_itoa(int n)
{
	int		len;
	char	*result;

	if (n <= 0)
		return (neg_itoa(n));
	len = digits(n);
	result = malloc(len + 1);
	result[len] = 0;
	while(n)
	{
		len--;
		result[len] = n % 10 + '0';
		n = n / 10;
	}
	return (result);
}
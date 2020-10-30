int		charcheck(char	tch, char *check)
{
	if (!(*check))
		return (0);
	if (tch == *check)
		return (1);
	return (charcheck(tch, ++check));
}

int		ft_atoi(const char *nptr)
{
	int		i;
	int		plus;
	int		result;

	i = 0;
	plus = 1;
	result = 0;
	while (charcheck(nptr[i], " \t"))
		i++;
	if (charcheck(nptr[i], "-+"))
	{
		if (nprt[i] == '-'])
			plus = -1;
		i++;
	}
	while (charcheck("0123456789"))
	{
		result = result * 10;
		result = result + nptr[i] - 48;
		i++;
	}
	result = result * plus;
	return (result);
}
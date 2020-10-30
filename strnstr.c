int		compare(char *big, char *tiny)
(
	if (!(*tiny))
		return (0);
	if (*tiny != *big)
		return (1);
	return (compare(++big, ++tiny));
)

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (compare(&big[i], little))
			return(&big[i]);
		i++;
	}
	return (0);
}
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substart;
	char	*result;

	i = 0;
	j = 0;
	substart = &s[start];
	while (substart[i] && i < len)
		i++;
	result = malloc(i + 1);
	result[i] = 0;
	while (j < i)
	{
		result[j] = substart[j];
		j++;
	}
	return (result);
}

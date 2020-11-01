char	*ft_substr(char const *s, unsigned int start, size_t len);
{
	size_t	i;
	char	*sub;
	char	*sstr;

	i = 0;
	sub = &s[start];
	sstr = malloc(len + 1);
	sstr[len] = 0;
	while (i < len)
	{
		sstr[i] = sub[i];
		i++;
		if (sub[i] == 0)
			break;
	}
	if (i < len)
	{
		free(sstr);
		sstr = ft_substr(s, start, i);
	}
	return (sstr);
}

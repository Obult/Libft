char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	t;

	i = 0;
	t = -1;
	while (s[i])
	{
		if (s[i] == c)
			t = i;
		i++;
	}
	if (c == 0)
		return (&s[i]);
	if (t < 0)
		return (0);
	return (&s[t]);
}
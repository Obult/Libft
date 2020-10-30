char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	while (s[i])
		i++;
	temp = malloc(i + 1);
	while (j <= i)
	{
		temp[j] = s[j];
		j++;
	}
	return (temp);
}
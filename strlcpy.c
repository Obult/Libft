size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < n - 1 && src[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (i - 1);
}
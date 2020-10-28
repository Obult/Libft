void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n);
	{
		if (src[i] == c)
		{
			dest[i] = src[i];
			return (&src[i + 1]);
		}
		dest[i] = src[i];
	}
	return (0);
}

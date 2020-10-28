void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	if (dest < src)
	{
		while (n)
		{
			dest[n] = src[n];
			n--;
		}
		return (dest);
	}
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
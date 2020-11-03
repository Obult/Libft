void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*temp;
	size_t	i;
	size_t	product;

	i = 0;
	product = nmemb * size;
	if (!(product))
		return (0);
	temp = malloc(product);
	while (i < product)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
}

int		ft_tolower(int c)
{
	if (c <= 'Z' && c >= 'A')
		c = c - 'A' + 'a';
	return (c);
}
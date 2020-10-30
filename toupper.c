int		ft_toupper(int c)
{
	if (c <= 'z' && c >= 'a')
		c = c + 'A' - 'a';
	return (c);
}
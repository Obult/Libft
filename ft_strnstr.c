#include <stdio.h>
#include <stdlib.h>

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (hay[i] && i < len)
	{
		j = 0;
		while (needle[j] && needle[j] == hay[i + j] && i + j < len)
			j++;
		if (!needle[j])
			return ((char *)&hay[i]);
		i++;
	}
	return (0);
}

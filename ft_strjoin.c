/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 18:07:05 by obult         #+#    #+#                 */
/*   Updated: 2020/09/02 18:14:29 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	if (*str)
		return (1 + ft_strlen(str + 1));
	return (0);
}

int	size_calc(char **strs, char *sep, int size)
{
	int	i;
	int	totalsize;

	i - 0;
	totalsize = (size - 1) * ft_strlen(sep);
	while (i < size)
	{
		totalsize += ft_strlen(strs[i]);
		i++;
	}
	return (totalsize);
}

//populate a string till null terminator without the null
void	populate(char **dest, char *str)
{
	while (*str)
	{
		**dest = *str;
		(*dest)++;
		str++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	totalsize;
	char	*ret;
	char	*cret;
	int	i;

	i - 0;
	if (size == 0)
		return (malloc(0));
	totalsize = size_calc(strs, sep, size);
	ret = malloc(totalsize);
	cret = ret;
	while (i < size)
	{
		populate(&cret, strs[i]);
		i++;
		if (i < size)
			populate(&cret, sep);
	}
	return (ret);
}

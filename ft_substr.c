/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 22:20:13 by obult         #+#    #+#                 */
/*   Updated: 2020/11/04 18:28:35 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substart;
	char	*result;

	i = 0;
	j = 0;
	substart = (char *)s + start;
	if (start >= (unsigned int)ft_strlen(s))
		return (0);
	while (substart[i] && i < len)
		i++;
	result = malloc(i + 1);
	if (!result)
		return (0);
	result[i] = 0;
	while (j < i)
	{
		result[j] = substart[j];
		j++;
	}
	return (result);
}

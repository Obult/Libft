/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 22:20:07 by obult         #+#    #+#                 */
/*   Updated: 2020/11/15 15:23:22 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		inset(char c, char *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		len;
	int		i;

	i = 0;
	if (!s1 || !set)
		return (0);
	len = ft_strlen(s1);
	while (inset(s1[i], (char *)set) && s1[i])
		i++;
	if (s1[i])
		while (inset(s1[len - 1], (char *)set))
			len--;
	len = len - i;
	result = malloc(len + 1);
	if (!result)
		return (0);
	result = ft_memcpy(result, (char *)&s1[i], len);
	result[len] = 0;
	return (result);
}

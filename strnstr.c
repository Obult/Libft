/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strnstr.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 22:22:19 by obult         #+#    #+#                 */
/*   Updated: 2020/11/12 21:17:59 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_compare(unsigned char *big, unsigned char *tiny)
{
	if (!(*tiny))
		return (1);
	if (*tiny != *big)
		return (0);
	return (ft_compare(big + 1, tiny + 1));
}

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l_len;

	i = 0;
	l_len = ft_strlen(little);
	while (i <= len - l_len && big[i])
	{
		if (ft_compare((unsigned char *)&big[i], (unsigned char *)little))
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}

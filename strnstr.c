/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strnstr.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 22:22:19 by obult         #+#    #+#                 */
/*   Updated: 2020/11/03 23:49:38 by obult         ########   odam.nl         */
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
	size_t	j;

	i = 0;
	j = ft_strlen(little);
	if (!(little[0]))
		return ((char *)big);
	while (i < len - j)
	{
		if (ft_compare((unsigned char *)&big[i], (unsigned char *)little))
			return ((char *)&big[i]);
		i++;
	}
	return (0);		
}

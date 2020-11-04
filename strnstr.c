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

static int	ft_compare(char *big, char *tiny)
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

	i = 0;
	while (i < len)
	{
		if (ft_compare((char *)&big[i], (char *)little))
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}

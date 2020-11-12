/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   memcmp.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 22:21:11 by obult         #+#    #+#                 */
/*   Updated: 2020/11/04 12:20:52 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*cs1;
	unsigned char	*cs2;

	i = 0;
	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	while (i < n)
	{
		if (cs1[i] - cs2[i])
			return (cs1[i] - cs2[i]);
		i++;
	}
	return (0);
}

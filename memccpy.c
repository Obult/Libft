/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   memccpy.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 22:20:57 by obult         #+#    #+#                 */
/*   Updated: 2020/11/04 21:14:21 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*csrc;
	char	*cdest;

	i = 0;
	csrc = (char *)src;
	cdest = (char *)dest;
	while (i < n)
	{
		if (csrc[i] == c)
		{
			return (&csrc[i + 1]);
		}
		cdest[i] = csrc[i];
		i++;
	}
	return (0);
}

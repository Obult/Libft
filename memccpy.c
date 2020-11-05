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
	size_t			i;
	unsigned char	*cdest;
	unsigned char	*csrc;

	i = 0;
	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	while (i < n)
	{
		cdest[i] = csrc[i];
		if (csrc[i] == (unsigned char)c)
			return (cdest + i + 1);
		i++;
	}
	return (0);
}

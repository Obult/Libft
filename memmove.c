/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   memmove.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 22:21:25 by obult         #+#    #+#                 */
/*   Updated: 2020/11/04 18:29:24 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*csrc;
	char		*cdest;

	i = 0;
	csrc = (char *)src;
	cdest = (char *)dest;
	if (dest < src)
	{
		while (n)
		{
			n--;
			cdest[n] = csrc[n];
		}
		return (dest);
	}
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dest);
}

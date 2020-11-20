/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 22:21:25 by obult         #+#    #+#                 */
/*   Updated: 2020/11/20 11:23:11 by oswin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;

	i = 0;
	if (dest == 0 && src == 0)
		return (0);
	if (dest == src)
		return (dest);
	if (dest > src)
	{
		while (n)
		{
			n--;
			(unsigned char *)dest[n] = (unsigned char *)src[n];
		}
		return (dest);
	}
	while (i < n)
	{
		(unsigned char *)dest[i] = (unsigned char *)src[i];
		i++;
	}
	return (dest);
}

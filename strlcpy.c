/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strlcpy.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 22:22:00 by obult         #+#    #+#                 */
/*   Updated: 2020/11/04 18:31:02 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size - 1 && src[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}
	if (i == size - 1)
	{
		dst[i] = 0;
		i++;
	}
	return (i);
}

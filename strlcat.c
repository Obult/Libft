/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strlcat.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 22:21:52 by obult         #+#    #+#                 */
/*   Updated: 2020/11/04 18:35:19 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t	i;
// 	size_t	j;

// 	j = 0;
// 	i = ft_strlen(dst);
// 	while (i < size)
// 	{
// 		if (i == size - 1)
// 		{
// 			dst[i] = 0;
// 			i++;
// 		}
// 		// else if(!ft_isprint(src[j]))
// 		// 	j++;
// 		else
// 		{
// 			dst[i] = src[j];
// 			i++;
// 			j++;
// 		}
// 	}
// 	return (ft_strlen(dst));
// }

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		dsize;
	size_t		ssize;
	size_t		ret_size;

	dsize = ft_strlen(dst);
	ssize = ft_strlen(src);
	if (dsize >= size)
		return (dsize + ssize);
	ret_size = ft_strlcpy(&dst[dsize], src, ssize + 1);
	return(ret_size);
}
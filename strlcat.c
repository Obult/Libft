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

// size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
// {
// 	size_t		dst_len;
// 	size_t		src_len;
// 	size_t		return_size;

// 	dst_len = ft_strlen(dst);
// 	src_len = ft_strlen(src);
// 	if (dst_size <= src_len + dst_len)
// 		return (src_len + dst_len);
// 	return_size = ft_strlcpy(&dst[dst_len], src, dst_size - ft_strlen(src));
// 	return(return_size + dst_len);
// }

// int		main(void)
// {
// 	char	dest[47];
// 	ft_strlcpy(dest, "there is no stars in the sky", 29);
// 	printf("%i\n", ft_strlcat(dest, "the cake is a lie !\0I'm hidden lol\r\n", 33));
// }



size_t		ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t		dst_len;
	size_t		src_len;
	size_t		extra_size;
	size_t		i;

	i = 0;
	dst_len	= ft_strlen(dst);
	src_len = ft_strlen(src);
	extra_size = dst_size - dst_len;
	if (dst_len >= dst_size)
		return (dst_size + src_len);
	while (src[i] && i < extra_size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = 0;
	return (dst_len + src_len);
}


// if dst_len >= dst_size do nothing return dst_len
// else
// extra_size = dst_size - dst_len
// copy extra_size chars from src to end of the dst string,
// return dst_len + extra_size  

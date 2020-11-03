/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   memccpy.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 22:20:57 by obult         #+#    #+#                 */
/*   Updated: 2020/11/03 22:20:58 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (src[i] == c)
		{
			return (&src[i + 1]);
		}
		dest[i] = src[i];
		i++;
	}
	return (0);
}

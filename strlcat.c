/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strlcat.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 22:21:52 by obult         #+#    #+#                 */
/*   Updated: 2020/11/03 22:21:53 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (i == size - 1)
	{
		dest[i] = '\0';
		i++;
	}
	return (i);
}

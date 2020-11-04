/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 22:20:13 by obult         #+#    #+#                 */
/*   Updated: 2020/11/04 11:45:03 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substart;
	char	*result;

	i = 0;
	j = 0;
	substart = &s[start];
	while (substart[i] && i < len)
		i++;
	result = malloc(i + 1);
	result[i] = 0;
	while (j < i)
	{
		result[j] = substart[j];
		j++;
	}
	return (result);
}

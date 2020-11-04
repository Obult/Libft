/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   calloc.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 22:18:25 by obult         #+#    #+#                 */
/*   Updated: 2020/11/04 11:32:19 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*temp;
	size_t	i;
	size_t	product;

	i = 0;
	product = nmemb * size;
	if (!(product))
		return (0);
	temp = malloc(product);
	while (i < product)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
}

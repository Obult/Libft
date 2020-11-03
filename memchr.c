/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   memchr.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 22:21:04 by obult         #+#    #+#                 */
/*   Updated: 2020/11/03 22:21:05 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}

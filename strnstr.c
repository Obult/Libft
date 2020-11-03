/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strnstr.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 22:22:19 by obult         #+#    #+#                 */
/*   Updated: 2020/11/03 22:22:20 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

static int	compare(char *big, char *tiny)
(
	if (!(*tiny))
		return (0);
	if (*tiny != *big)
		return (1);
	return (compare(++big, ++tiny));
)

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (compare(&big[i], little))
			return(&big[i]);
		i++;
	}
	return (0);
}

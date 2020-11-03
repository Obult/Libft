/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 22:20:07 by obult         #+#    #+#                 */
/*   Updated: 2020/11/03 22:20:08 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

static int		inset(char c, char *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len = ft_strlen(s1);
	while (inset(s1[len], set))
		len--;
	while (inset(s1[i], set))
		i++;
	len = len - i;
	result = malloc(len + 1);
	while (j < len)
	{
		result[j] = s1[i + j];
		j++;
	}
	result[j] = 0;
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 18:07:05 by obult         #+#    #+#                 */
/*   Updated: 2020/09/02 18:14:29 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i])
		i++;
	while (s2[i])
		i++;
	result = malloc(i + 1);
	result[i] = 0;
	while (s1[j])
	{
		result[j] = s1[j]; 
		j++;
	}
	while (s2[k])
	{
		result[j] = s2[k];
		j++;
		k++;
	}
	return (result);
}

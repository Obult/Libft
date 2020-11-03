/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strdup.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 22:21:45 by obult         #+#    #+#                 */
/*   Updated: 2020/11/03 22:21:46 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	while (s[i])
		i++;
	temp = malloc(i + 1);
	while (j <= i)
	{
		temp[j] = s[j];
		j++;
	}
	return (temp);
}

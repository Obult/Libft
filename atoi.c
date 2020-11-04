/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   atoi.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 22:18:01 by obult         #+#    #+#                 */
/*   Updated: 2020/11/04 22:09:40 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

static int		charcheck(char tch, char *check)
{
	if (!(*check))
		return (0);
	if (tch == *check)
		return (1);
	return (charcheck(tch, ++check));
}

int				ft_atoi(const char *nptr)
{
	int		i;
	int		plus;
	int		result;

	i = 0;
	plus = 1;
	result = 0;
	while (charcheck(nptr[i], " \t\n"))
		i++;
	if (charcheck(nptr[i], "-+"))
	{
		if (nptr[i] == '-')
			plus = -1;
		i++;
	}
	while (charcheck(nptr[i], "0123456789"))
	{
		result = result * 10;
		result = result + nptr[i] - 48;
		i++;
	}
	result = result * plus;
	return (result);
}

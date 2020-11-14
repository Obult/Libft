/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 21:16:23 by obult         #+#    #+#                 */
/*   Updated: 2020/11/14 13:49:34 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int			ft_strclen(const char *str, char c)
{
	if (*str && *str != c)
		return (1 + ft_strclen(str + 1, c));
	return (0);
}

static int			countloop(char *str, char c)
{
	int		wrds;

	wrds = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str != c && *str)
			wrds++;
		while (*str != c && *str)
			str++;
	}
	return (wrds);
}

static void			ft_freeer(char **pnt, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		free(pnt[i]);
		i++;
	}
}

static char			**arrange(char **pnt, const char *s, char c)
{
	int		i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			pnt[i] = ft_substr(s, 0, ft_strclen(s, c));
			if (!(pnt[i]))
			{
				ft_freeer(pnt, i);
				return (0);
			}
		}
		if (*s)
			i++;
		while (*s && *s != c)
			s++;
	}
	return (pnt);
}

char				**ft_split(char const *s, char c)
{
	char	**pnts;
	int		words;

	if (!s)
		return (0);
	words = countloop((char *)s, c);
	pnts = malloc(sizeof(char *) * (words + 1));
	if (!pnts)
		return (0);
	pnts = arrange(pnts, s, c);
	pnts[words] = 0;
	if (pnts)
		return (pnts);
	free(pnts);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 22:19:46 by obult         #+#    #+#                 */
/*   Updated: 2020/11/04 21:59:56 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void		countloop(char *str, char c, int *tot, int *wds)
{
	while (*str)
	{
		while (*str == c)
		{
			str++;
		}
		if (*str != c && *str)
			(*wds)++;
		while (*str != c && *str)
		{
			(*tot)++;
			str++;
		}
	}
}

static char		**arrange(char *str, char c, char **pnts, char *bst)
{
	int	i;

	i = 0;
	while (*str)
	{
		while (*str == c)
		{
			str++;
		}
		if (*str != c && *str)
		{
			pnts[i] = bst;
			i++;
			while (*str != c && *str)
			{
				*bst = *str;
				bst++;
				str++;
			}
			*bst = 0;
			bst++;
		}
	}
	return (pnts);
}

char			**ft_split(char const *s, char c)
{
	char	**pnts;
	char	*bst;
	int		tsize;
	int		words;

	tsize = 0;
	words = 0;
	countloop((char *)s, c, &tsize, &words);
	if (words)
	{
		bst = malloc(tsize + words);
		pnts = malloc((words + 1) * 4);
		pnts = arrange((char *)s, c, pnts, bst);
		return (pnts);
	}
	return (0);
}

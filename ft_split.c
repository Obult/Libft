/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 22:19:46 by obult         #+#    #+#                 */
/*   Updated: 2020/11/03 23:15:43 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		check_set(char ct, char *set)
{
	while (*set)
	{
		if (*set == ct)
			return (1);
		set++;
	}
	return (0);
}

static void		countloop(char *str, char *set, int *tot, int *wds)
{
	while (*str)
	{
		while (check_set(*str, set))
		{
			str++;
		}
		if (!(check_set(*str, set)) && *str)
			(*wds)++;
		while (!(check_set(*str, set)) && *str)
		{
			(*tot)++;
			str++;
		}
	}
}

static void		arrange(char *str, char *set, char **pnts, char *bst)
{
	int	i;

	i = 0;
	while (*str)
	{
		while (check_set(*str, set))
		{
			str++;
		}
		if (!(check_set(*str, set)) && *str)
		{
			pnts[i] = bst;
			i++;
			while (!(check_set(*str, set)) && *str)
			{
				*bst = *str;
				bst++;
				str++;
			}
			*bst = 0;
			bst++;
		}
	}
}

char			**ft_split(char const *s, char c)
{
	char	**pnts;
	char	*bst;
	int		tsize;
	int		words;
	char	*charset;

	tsize = 0;
	words = 0;
	charset[0] = c;
	charset[1] = 0;
	countloop(s, charset, &tsize, &words);
	if (words)
	{
		bst = malloc(tsize + words);
		pnts = malloc((words + 1) * 4);
		arrange(s, charset, pnts, bst);
		return (pnts);
	}
	return (0);
}

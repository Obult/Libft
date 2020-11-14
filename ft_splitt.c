/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 16:33:36 by obult         #+#    #+#                 */
/*   Updated: 2020/11/11 18:14:37 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include "libft.h"
#include <stdio.h>

static void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*cdest;
	char	*csrc;

	i = 0;
	csrc = (char *)src;
	cdest = (char *)dest;
	if (dest == 0 && src == 0)
		return (0);
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dest);
}

static int		ft_strclen(char *str, char c)
{
	if (*str && *str != c)
		return (1 + ft_strclen(str + 1, c));
	return (0);
}

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

static int		arrange(char **pnt, char *s, char c)
{
	int		len;

	while (*s == c)
		s++;
	if (!(*s))
		return (1);
	len = ft_strclen(s, c);
	printf("%i", len);
	*pnt = malloc(len + 1);
	if (!(*pnt))
		return (0);
	*pnt = ft_memcpy(pnt[0], s, len);
	pnt[len] = 0;
	if (arrange(&pnt[1], s + len, c))
		return (1);
	free(*pnt);
	return (0);
}

char			**ft_split(char const *s, char c)
{
	char	**pnts;
	int		tsize;
	int		words;

	tsize = 0;
	words = 0;
	countloop((char *)s, c, &tsize, &words);
	pnts = malloc(words);
	if (!pnts)
		return (0);
	if (arrange(pnts, (char *)s, c))
		return (pnts);
	free(pnts);
	return (0);
}

int				main(void)
{
	char	**pointers;

	pointers = ft_split("cannotbcthestringtolonghey you try to split this string", ' ');
	printf("%s\n%s\n%s\n", pointers[0], pointers[1], pointers[6]);
	exit(0);
}

#include <stdlib.h>
#include <stdio.h>

int	check_set(char ct, char *set)
{
	while(*set)
	{
		if(*set == ct)
			return (1);
		set++;
	}
	return (0);
}

void	countloop(char *str, char *set, int *tot, int *wds)
{
	while(*str)
	{
		while(check_set(*str, set))
		{
			str++;
		}
		if(!(check_set(*str, set)) && *str)
			(*wds)++;
		while(!(check_set(*str, set)) && *str)
		{
			(*tot)++;
			str++;
		}
	}
}

void	arrange(char *str, char *set, char **pnts, char *bst)
{
	int	i;

	i = 0;
	while(*str)
	{
		while(check_set(*str, set))
		{
			str++;
		}
		if(!(check_set(*str, set)) && *str)
		{
			pnts[i] = bst;
			i++;
			while(!(check_set(*str, set)) && *str)
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

char	**ft_split(char *str, char *charset)
{
	char	**pnts;
	char	*bst;
	int	tsize;
	int	words;

	tsize = 0;
	words = 0;
	countloop(str, charset, &tsize, &words);
	printf("%i\n%i\n",tsize ,words);
	if(words)
	{
		bst = malloc(tsize + words);
		pnts = malloc((words + 1) * 4);
		arrange(str, charset, pnts, bst);
		return (pnts);
	}
	return (0);
}

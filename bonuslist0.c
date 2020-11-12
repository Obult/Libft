/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bonuslist0.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 21:46:02 by obult         #+#    #+#                 */
/*   Updated: 2020/11/12 21:46:05 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
**	Allocates (with malloc(3)) and returns a new
**	element. The variable ’content’ is initialized
**	with the value of the parameter ’content’. The
**	variable ’next’ is initialized to NULL.
*/

t_list		*ft_lstnew(void *content)
{
	t_list	*n_list;

	n_list = malloc(sizeof(t_list));
	if (!n_list)
		return (0);
	n_list->content = content;
	n_list->next = 0;
	return (n_list);
}

/*
**	Adds the element ’new’ at the beginning of the
**	list.
*/

void		ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
**	Counts the number of elements in a list.
*/

int			ft_lstsize(t_list *lst)
{
	if (!lst)
		return (0);
	return (1 + ft_lstsize(lst->next));
}

/*
**	Returns the last element of the list.
*/

t_list		*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	if (!(lst->next))
		return (lst);
	return (ft_lstlast(lst->next));
}

/*
**	Adds the element ’new’ at the end of the list.
*/

void		ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	if (last)
		last->next = new;
	else
		*lst = new;
}

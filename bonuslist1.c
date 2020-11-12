/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bonuslist1.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 21:45:06 by obult         #+#    #+#                 */
/*   Updated: 2020/11/12 21:46:31 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
**	Takes as a parameter an element and frees the
**	memory of the element’s content using the function
**	’del’ given as a parameter and free the element.
**	The memory of ’next’ must not be freed.
*/

void		ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

/*
**	Deletes and frees the given element and every
**	successor of that element, using the function ’del’
**	and free(3).
**	Finally, the pointer to the list must be set to
**	NULL.
*/

void		ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list		*temp;

	temp = *lst;
	if (temp->next)
	{
		ft_lstclear(&(temp->next), del);
	}
	free(temp);
	del(temp->content);
	*lst = 0;
}

/*
**	Iterates the list ’lst’ and applies the function
**	’f’ to the content of each element.
*/

void		ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst)
	{
		f(lst->content);
		ft_lstiter(lst->next, f);
	}
}

/*
**	Iterates the list ’lst’ and applies the function
**	’f’ to the content of each element. Creates a new
**	list resulting of the successive applications of
**	the function ’f’. The ’del’ function is used to
**	delete the content of an element if needed.
*/

t_list		*ft_lstmap(t_list *l, void *(*f)(void *), void (*del)(void *))
{
	t_list		*new;

	if (l)
	{
		new = ft_lstnew(f(l->content));
		if (!new)
			return ((t_list *)-1);
		new->next = ft_lstmap(l->next, f, del);
		if (new->next == (t_list *)-1)
		{
			del(new);
			return ((t_list *)-1);
		}
		return (new);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/06 00:27:55 by obult         #+#    #+#                 */
/*   Updated: 2020/11/06 01:44:19 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

// Allocates (with malloc(3)) and returns a new
// element. The variable ’content’ is initialized
// with the value of the parameter ’content’. The
// variable ’next’ is initialized to NULL.

t_list		*ft_lstnew(void *content)
{
	t_list	*n_list;

	n_list = malloc(sizeof(t_list));
	n_list->content = content;
	n_list->next = 0;
	return(n_list);
}

// Adds the element ’new’ at the beginning of the
// list.

void		ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

//Counts the number of elements in a list.

int			ft_lstsize(t_list *lst)
{
	if (!lst)
		return (0);
	return (1 + ft_lstsize(lst->next));
}

//Returns the last element of the list.

t_list		*ft_lstlast(t_list *lst)
{
	if (!(lst->next))
		return (lst);
	return (ft_lstsize(lst->next));
}

//Adds the element ’new’ at the end of the list.

void		ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	last->next = new;
}

// Takes as a parameter an element and frees the
// memory of the element’s content using the function
// ’del’ given as a parameter and free the element.
// The memory of ’next’ must not be freed.

void		ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst);
	free(lst);
}

// Deletes and frees the given element and every
// successor of that element, using the function ’del’
// and free(3).
// Finally, the pointer to the list must be set to
// NULL.

void		ft_lstclear(t_list **lst, void (*del)(void*))
{
	if ((*lst)->next)	
		ft_lstclear(&((*lst)->next), del);
	ft_lstdelone(*lst, del);
}

//Iterates the list ’lst’ and applies the function
//’f’ to the content of each element.

void		ft_lstiter(t_list *lst, void (*f)(void *))
{
	f(lst);
	if (lst->next);
		ft_lstiter(lst->next, f);	
}

// Iterates the list ’lst’ and applies the function
// ’f’ to the content of each element. Creates a new
// list resulting of the successive applications of
// the function ’f’. The ’del’ function is used to
// delete the content of an element if needed.

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{

}
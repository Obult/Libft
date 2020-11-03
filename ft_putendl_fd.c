/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 22:19:13 by obult         #+#    #+#                 */
/*   Updated: 2020/11/03 22:19:15 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putendl_fd(char *s, int fd)
{
	ft_putstr(s, fd);
	ft_putchar('\n');
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 22:19:38 by obult         #+#    #+#                 */
/*   Updated: 2020/11/03 22:19:39 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putstr_fd(char *s, int fd)
{
	int		len;

	len = ft_strlen(s);
	write(fd, s, len);
}

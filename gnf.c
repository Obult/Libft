/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   gnf.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: oswin <oswin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/25 00:05:08 by oswin         #+#    #+#                 */
/*   Updated: 2022/07/25 00:14:49 by oswin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

static int	get_next_file(int fd, char ***receiver, int counter)
{
	char	*tmp;
	int		gnl_return;

	tmp = NULL;
	gnl_return = get_next_line(fd, &tmp);
	if (gnl_return == -1)
		return (-1);
	if (gnl_return == 1)
		if (get_next_file(fd, receiver, counter + 1) == -1)
			free(tmp);
	if (gnl_return == 0)
	{
		*receiver = malloc(sizeof(char *) * (counter + 1));
		if (*receiver == NULL)
			return (-1);
	}
	**receiver = tmp;
	return (0);
}

char	**file_getter(char *filename)
{
	char	**receiver;
	int		fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (NULL);
	if (get_next_file(fd, &receiver, 0))
		return (NULL);
	return (reciever);
}

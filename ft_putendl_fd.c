#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr(s, fd);
	ft_putchar('\n');
}
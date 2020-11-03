#include <unistd.h>

static void	ft_putdig_fd(int dig, int fd)
{
	dig = dig + '0';
	write(fd, &dig, 1);
}

void		ft_putnbr_fd(int n, int fd)
{
	if (n < 10 && n >= 0)
	{
		ft_putdig_fd(n, fd);
	}
	else if (n > 0)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putdig_fd(n % 10, fd);
	}
	else if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		write(fd, "-", 1);
		ft_putnbr_fd(n * -1, fd);
	}
}

int			main(void)
{
	int		p;

	p = 1;
	ft_putnbr_fd(p, 1);
	return (0);
}
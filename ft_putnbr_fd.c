
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	value;

	value = n;
	if (value < 0)
	{
		value = -value;
		ft_putchar_fd('-', fd);
	}
	if (value >= 10)
		ft_putnbr_fd(value / 10, fd);
	ft_putchar_fd((value % 10) + '0', fd);
}

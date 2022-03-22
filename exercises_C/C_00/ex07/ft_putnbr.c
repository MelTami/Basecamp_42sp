#include <unistd.h>

void	ft_putnbr(int nb)
{
	long int	n;
	char		print;

	n = nb;
	if (n == -2147483648 || n == 2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		n = nb * (-1);
		write(1, "-", 1);
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	print = (n % 10) + 48;
	write(1, &print, 1);
}

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	nbl;
	char	c[10];
	short	i;

	nbl = nb;
	i = 0;
	if(0 == nb)
		write(1, "0", 1);
	if(nb < 0)
	{
		nbl *= -1;
		write(1, "-", 1);
	}
	while(nbl % 10)
	{
		c[i++] = (nbl % 10) + 48;
		nbl /= 10;
	}
	while(i >= 0)
		write(1, &c[--i], 1);
}

int	main(void)
{
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(-42);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
}
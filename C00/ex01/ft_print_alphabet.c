#include <unistd.h>

void	ft_print_alphabet(void)
{
	long	c;

	c = 96;
	while(++c < 123)
	{
		write(1, &c, 1);
	}
}

int	main()
{
	ft_print_alphabet();
}
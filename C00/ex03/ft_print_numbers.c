#include <unistd.h>

void	ft_print_numbers(void)
{
	short	l;

	l = 47;
	while(++l < 58)
		write(1, &l, 1);
}

int	main()
{
	ft_print_numbers();
}
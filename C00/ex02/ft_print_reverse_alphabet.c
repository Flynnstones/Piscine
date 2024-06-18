#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	short	d;
	
	d = 123;
	while(--d > 96)
	{
		write(1, &d, 1);
	}
}	

int	main()
{
	ft_print_reverse_alphabet();
}
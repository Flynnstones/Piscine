#include <unistd.h>

void	ft_putstr(char *str)
{
/*	
	//iterative
	while (*str)
		write(1, str++, 1);
*/	
	// recursive
	write(1, str, 1);
	if (*str)
		ft_putstr(str + 1);
/*	write(1, str, 1);
*/	// reversed string
}

int	main(int argc, char **argv)
{
	for (int i = 1; i < argc; ++i)
		ft_putstr(argv[i]), write(1, "\n", 1);
}

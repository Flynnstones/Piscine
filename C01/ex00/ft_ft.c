#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main()
{
	int	i;

	i = 0;
	ft_ft(&i);
	printf("%d", i);
}
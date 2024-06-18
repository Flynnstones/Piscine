#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if(b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main()
{
	int	i, n, div, mod;

	i = 23;
	n = 10;
	div = 0;
	mod = 0;
	ft_div_mod(i, n, &div, &mod);
	printf("i/n = %d & i%%n\n = %d", div, mod);
}
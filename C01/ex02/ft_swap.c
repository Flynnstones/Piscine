#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

int	main()
{
	int	i, n;

	i = 0;
	n = 1;
	ft_swap(&i, &n);
	printf("%d = 1 & %d = 0", i, n);
}
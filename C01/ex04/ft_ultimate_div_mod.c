#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = 0;
	if(*b)
	{
		temp = *a;
		*a = *a / *b;
		*b = temp % *b;
	}
}

int main()
{
	int	i;
	int n;

	i = 30;
	n = 0;
	ft_ultimate_div_mod(&i, &n);
	printf("i -> %d & n -> %d", i, n);
}
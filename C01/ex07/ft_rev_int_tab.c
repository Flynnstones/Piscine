#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	n;
	int	temp;

	i = 0;
	n = size;
	while(i < n/2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		i++;
		size--;
	}
}
		
int	main()
{
	int	array[] = {0, 2, 4, 6};
	int	i = 0;

	ft_rev_int_tab(array, 4);
	while(i < 4)
	{
		printf("%d", array[i++]);
	}
}
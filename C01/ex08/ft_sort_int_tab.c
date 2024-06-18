#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	// swap the value of the variables, with the use of a temp variable
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
} 

void	ft_sort_int_tab(int *tab, int size)
{
	// control for tab[value1] > tab[value2], if true, call swap function, increase counter variable i, repeat for the number of ints - 1
	// add a while loop that increases i for the condition tab[i] < tab[i + 1]
	int	i;

	i = 0;
	while(i < size - 1)
	{
		if(tab[i] > tab[i + 1])
			ft_swap(&tab[i], &tab[i + 1]);
		i++;
	}
	if(size - 1 > 0)
		ft_sort_int_tab(tab, size - 1);
}

int	main()
{
	int array[] = {8, 6, 2, 0, 4, 62};
	int	i = 0;
	int size = sizeof(array) / sizeof(int);

	printf("do the conditions hold?\n");
	ft_sort_int_tab(array, size);
	while(i < size)
	{
		if(i == size - 1)
		{
			printf("%d\n", array[i]);
			break ;
		}
		printf("%d < ", array[i++]);
	}
}
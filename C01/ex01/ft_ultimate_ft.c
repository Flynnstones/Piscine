#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main()
{
	int	i;
	int	*p1, **p2, ***p3, ****p4, *****p5, ******p6, *******p7, ********p8, *********p9;

	p9 = &p8;
	p8 = &p7;
	p7 = &p6;
	p6 = &p5;
	p5 = &p4;
	p4 = &p3;
	p3 = &p2;
	p2 = &p1;
	p1 = &i;
	i = 0;
	ft_ultimate_ft(p9);
	printf("%d", i);
}
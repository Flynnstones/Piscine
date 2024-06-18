#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	print_array(char *v, int base, int max)
{
	short	i;

	i = 0;
	if(v[i] == max)
	{
		while(i < base)
			ft_putchar(v[i++]);
		write(1, "\n", 1);
		return ;
	}
	while(i < base)
		ft_putchar(v[i++]);
	write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	char	v[10];
	char	v_max[10];
	short	i;
	short	pos;
	short	num;

	if (n <= 0 || n >= 10)
	{
		write(1, "wrong input\n", 12);
		return ;
	}
	i = 0;
	while(i < n)
	{
		v[i] = i + 48;
		v_max[i] = (10 - n) + i + 48;
		i++;
	}
	print_array(v, n, v_max[0]);
	while(v[0] != v_max[0])
	{
		pos = n - 1;
		while (v[pos] == v_max[pos])
			pos--;
		num = ++(v[pos]);
		while (pos < n - 1)
			v[++pos] = ++num;
		print_array(v, n, v_max[0]);
	}
}

int	main(void)
{
	ft_print_combn(0);
	write(1, "\n", 1);
	ft_print_combn(1);
	write(1, "\n", 1);
	ft_print_combn(2);
	write(1, "\n", 1);
}
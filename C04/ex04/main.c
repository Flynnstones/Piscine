#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_base(int, char *);
int		ft_atoi(const char *);
void	ft_putchar(char c);
void	print_nbr(int, int, char *);
int		double_char(char *);

int	main(int argc, char **argv)
{
	int		n;
	char	*baseSymbols;

	n = ft_atoi(argv[1]);
	baseSymbols = argv[2];
		
	ft_putnbr_base(n, baseSymbols);
	write(1, "\n", 1);
}

void	ft_putnbr_base(int nb, char *base)
{
	int	baseValue;

	baseValue = 0;
	while (base[baseValue])
	{
		if (base[baseValue] == '+' || base[baseValue] == '-')
			return ;
		baseValue++;
	}
	if (baseValue < 2)
		return ;
	if (double_char(base))
		return ;
	print_nbr(nb, baseValue, base);
}

void	print_nbr(int nbr, int baseValue, char *symbols)
{
	long	nL;

	nL = nbr;
	if (nL < 0)
	{
		nL = -nL;
		if (baseValue > 2)
			ft_putchar('-');
	}
	if (nL >= baseValue)
		print_nbr(nL / baseValue, baseValue, symbols);
	ft_putchar(symbols[nL % baseValue]);
}

int	double_char(char *symbols)
{
	int	i;
	int	j;
	
	i = 0;
	while(*(symbols + i))
	{
		j = i + 1;
		while(*(symbols + j))
		{
			if (*(symbols + i) == *(symbols + j))
				return 1;
			j++;
		}
		i++;
	}
	return 0;
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

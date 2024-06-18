#include <stdio.h>

int	ft_atoi(char *str)
{
	short	sign;
	int		number;

	sign = 1;
	number = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		number *= 10;
		number += *str - 48;
		str++;
	}
	if (sign > 0)
		return (number);
	return (-number);
}

int main()
{
	char	*s = "    ---+--+1234ab567";
	printf("%d\n", ft_atoi(s));
}

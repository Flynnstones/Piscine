int	is_finished(int nb, int *is_finished)
{
	if (nb <= 1)
	{
		*is_finished = 1;
		return (0);
	}
	if (nb == 2)
	{
		*is_finished = 1;
		return (1);
	}
	if (nb % 2 == 0)
	{
		*is_finished = 1;
		return (0);
	}
	return (-1);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	finished;
	int	ret;

	i = 3;
	finished = 0;
	ret = is_finished(nb, &finished);
	if (finished == 1)
	{
		return (ret);
	}
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i += 2;
	}
	return (1);
}

#include <stdio.h>

int ft_is_prime(int nb);

int main () {
    for (int i = 1; i < 102; i += 1) {
        int result = ft_is_prime(i);
		printf("ft_is_prime(%d) = %d\n", i, result);
    }

    return 0;
}
int	ft_iterative_power(int nb, int power)
{
	int	size;

	if (power < 0)
		return (0);
	size = 1;
	while (power--)
		size *= nb;
	return (size);
}

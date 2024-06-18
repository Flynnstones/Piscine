int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (0 == power)
		return (1);
	return (ft_recursive_power(nb, power - 1) * nb);
}

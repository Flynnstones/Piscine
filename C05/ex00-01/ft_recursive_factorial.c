int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (0 == nb)
		return (1);
	return (ft_recursive_factorial(nb - 1) * nb);
}

int	ft_iterative_factorial(int nb)
{	
	int	size;
	
	if (nb < 0)
		return (0);
	size = 1;
	while (nb)
	{
		size *= nb--;
	}
	return (size);
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (0 == index)
		return (0);
	else if (1 == index)
		return (1);
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

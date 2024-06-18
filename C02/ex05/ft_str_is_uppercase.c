int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 65 && *str <= 90))
			return (0);
		++str;
	}
	return (1);
}

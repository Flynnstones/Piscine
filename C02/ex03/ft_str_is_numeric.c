int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 48 && *str <= 57)
			++str; 
		else
			return (0);
	}
	return (1);
}

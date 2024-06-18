int	ft_str_is_lowercase(char *str)
{
	//Use directly the char pointed as a bool 💡
	while (*str)
	{	//This ! inverts the logic
		if (!(*str >= 97 && *str <= 122))
			return (0);
		++str;
	}
	return (1);
}

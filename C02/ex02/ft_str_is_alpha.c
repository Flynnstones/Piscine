int	ft_str_is_alpha(char *str)
{
	//Assume String not empty, Until  don't reach \0, keep going
	while (*str != '\0')
	{
		if ((*str >= 97 && *str <= 122) || (*str >= 65 && *str <= 90))
			++str; 
		else
			//Stumbled upon a non char
			return (0);
	}
	//Or the string is empty, or only alpha chars
	return (1);
}

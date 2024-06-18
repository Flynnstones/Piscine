char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		//If char is ALPHA-UPPER, change to lower
		if (*(str + i) >= 65 && *(str + i) <= 90)
			*(str + i) += 32;
		//Otherwise, just keep going
		++i;
	}
	return (str);
}

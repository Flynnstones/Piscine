char	*ft_strupcase(char str[])
{
	//Array notation, easies to read. Syntactic 🍭 sugar.
	int	i;

	i = 0;
	while (str[i])
	{
		//If char lower, to UPPER
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		++i;
	}
	return (str);
}

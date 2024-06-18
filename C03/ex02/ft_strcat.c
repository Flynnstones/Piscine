char *ft_strcat(char *dest, chqr *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*(dest + j))
		++j;
	while (*(src + i))
	{
		*(dest + j) = *(src + i);
		++i;
		++j;
	}
	*(dest + j) = *(src + i);
	return (dest);
}	

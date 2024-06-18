char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	//I use the char pointed as a boolean 💡
	while (*src)
		*(dest + i++) = *src++;
	
	//Append sentinel
	*(dest + i) = '\0';
	return (dest);
}

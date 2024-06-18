char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		i;

	i = 0;
	//Copy part
	while (*src && n)
	{
		*(dest + i++) = *src++;
		--n;
	}
	//Pad with 0s if n not exausted
	while (n--)
		*(dest + i++) = '\0';
	return (dest);
}

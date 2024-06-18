unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	//Pro typing, 🚨not good practice🚨
	int	len;

	len = 0;
	while (*(src + len) && --size)
		*dest++ = *(src + len++);
	*dest = '\0';		
	while (*(src + len))
		++len;
	return (len);
}

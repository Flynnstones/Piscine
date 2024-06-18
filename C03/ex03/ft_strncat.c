char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int		i;
	int		destEnd;

	i = destEnd = 0;
      
	//      ⬇︎ i Wanna reach destEnd
	//"hello\0________"
	while (*(dest + destEnd))
		++destEnd;

	//	 destEnd
	//		⬇︎
	//"hello________" ⬅︎ dest
	//" world\0"      ⬅︎ src
	//I append <=nb chars from src chars into dest
	while (*(src + i) && nb--)
	{
		*(dest + destEnd) = *(src + i);
		++i;
		++destEnd;
	}

	//Append a \0 to dest
	//			  ⬇︎
	//"hello world\0"
	*(dest + destEnd) = '\0';

	return (dest);
}

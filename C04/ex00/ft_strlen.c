#include <stdio.h>

int	ft_strlen(char *str)
{
/*	//iterative solution
	int	len;

	len = 0;
	while(*(str + len))
		++len;
	return (len);
*/
	if(!(*str))
		return (0);
	return ft_strlen(str + 1) + 1;
}

int	main(int argc, char **argv)
{
	for(int i = 1; i < argc; i++)
		printf("%s -> %d chars\n", argv[i], ft_strlen(argv[i]));
}	

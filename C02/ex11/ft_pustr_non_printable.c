#include <unistd.h>

char	*print_hexadecimal(unsigned char c)
{
	int	i;
	char	*str;
	char	hex[3];
	char	*dst;

	write(1, "\\", 1);
	str = "0123456789abcdef";
	i = (int)c;
	hex[0] = str[i / 16];
	hex[1] = str[i % 16];
	hex[2] = '\0';
	dst = hex;
	return(dst);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		// Function that returns a character in its hexadecimal form, following a backslash
		if(str[i] < 32 || str[i] == 127)
			write(1, print_hexadecimal(str[i++]), 2);
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	str[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str);
}

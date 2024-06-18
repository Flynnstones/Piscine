/*
 ~Create a function that displays the number entered as a parameter.
 ~The function has to be able to display all possible values within an in type variable.

	4 bytes <--------------------------------->
	max_int 01111111_11111111_11111111_11111111 -> 2'147'483'647
	min_int 10000000_00000000_00000000_00000000 -> 2'147'483'648

 ~ft_putnbr(42) displays "42".
 ~ft_putnbr(-42) displays "-42".
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar((nbr % 10) + 48);
}		

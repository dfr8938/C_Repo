#include "ft_h.h"

void ft_print_combn(int n)
{
	int i;
	char comma = ',';
	char space = ' ';
	char zero = '0';

	i = 0;
	while (i <= n)
	{
		if (i < 10)
		{
			ft_putchar(zero);
			ft_putnbr(i);
			ft_putchar(comma);
			ft_putchar(space);
		}
		else if (i == n)
			ft_putnbr(i);
		else
		{
			ft_putnbr(i);
			ft_putchar(comma);
			ft_putchar(space);
		}
		i++;
	}
}

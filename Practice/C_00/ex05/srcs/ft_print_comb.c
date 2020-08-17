#include "ft_h.h"

void	ft_putstr(char zero, char one, char two)
{
	ft_putchar(zero);
	ft_putchar(one);
	ft_putchar(two);
}

void	ft_print_comb(void)
{
	char zero;
	char one;
	char two;
	char comma = ',';
	char space = ' ';

	zero = 48;
	one = 49;
	two = 50;
	while (zero <= 55)
	{
		one = zero + 1;
		while (one <= 56)
		{
			two = one + 1;
			while (two <= 57)
			{
				if (zero < 55)
				{
					ft_putstr(zero, one, two);
					ft_putchar(comma);
					ft_putchar(space);
				}
				else
				{
					ft_putstr(zero, one, two);
				}
				two++;
			}
			one++;
		}
		zero++;
	}
}

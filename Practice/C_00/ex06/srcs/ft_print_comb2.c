#include "ft_h.h"

void	ft_print_commaspace(char a, char b, char c, char d)
{
	char space = ' ';
	char comma = ',';

	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(space);
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(comma);
	ft_putchar(space);
}

void	ft_print(char a, char b, char c, char d)
{
	char space = ' ';

	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(space);
	ft_putchar(c);
	ft_putchar(d);
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = 48;
	while (a <= 57)
	{
		b = 48;
		while (b <= 57)
		{
			c = 48;
			while (c <= 57)
			{
				d = 48;
				while (d <= 57)
				{
					if ((a == 57 && b == 57) && (c == 57 && d == 57))
					{
						ft_print(a, b, c, d);
					}
					else
					{
						ft_print_commaspace(a, b, c, d);
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

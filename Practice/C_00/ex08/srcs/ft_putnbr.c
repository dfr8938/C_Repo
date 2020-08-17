#include "ft_h.h"

void ft_putnbr(int nb)
{
	if (nb < 0 || nb <= -2147483647)
	{
		nb *= (-1);
		ft_putchar('-');
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb <= 9)
	{
		nb += '0';
		ft_putchar(nb);
	}
}

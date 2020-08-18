void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = j;
		i++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		if (i = 0 || tab[i] >= tab[i + 1])
			i++;
		else
		{
			j = tab[i];
			tab[i] = tab[size - 1];
			tab[size - 1] = j;
			i++;
		}
	}
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	if (ft_strlen(str) == 0)
		return 1;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return 0;
		i++;
	}
	return 1;
}

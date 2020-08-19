int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;

	if (ft_strlen(str) == 0)
		return 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i] >= 'A' && str[i] <= 'Z'))
			return 1;
		return 0;
		i++;
	}
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if ((str[i] >= 'a' && str[i] <= 'z' && i == 0))
			str[i] = str[i] - 32;
		else if (str[i] == ' ' && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return str;
}

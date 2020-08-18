int	ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	return i;
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (i < ft_strlen(src))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

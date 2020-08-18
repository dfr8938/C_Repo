unsigned int	ft_strlen(char *src)
{
	unsigned int i;

	i = 0;
	while (src[i])
		i++;
	return i;
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	if (n > ft_strlen(src))
		n = ft_strlen(src);

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
